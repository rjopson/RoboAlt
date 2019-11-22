// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 1 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 2 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 3 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 4 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 5 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 6 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 7, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 7 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 8, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 8 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 9, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 9 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS10( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 10; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 10 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 10; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 10 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 10 * sizeof(PyObject *) );
            memcpy( python_pars + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 10 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 10 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 10; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 10 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 10 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 10 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 10 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (10 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 10 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (10 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 10 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 10, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 10 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            10
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 10 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS11( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 11; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 11 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 11; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 11 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 11 * sizeof(PyObject *) );
            memcpy( python_pars + 11, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 11 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 11 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 11; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 11 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 11 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 11, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 11 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 11 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (11 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 11 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (11 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 11 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 11, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 11 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            11
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 11 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS12( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 12; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 12 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 12; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 12 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 12 * sizeof(PyObject *) );
            memcpy( python_pars + 12, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 12 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 12 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 12; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 12 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 12 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 12, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 12 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 12 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (12 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 12 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (12 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 12 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 12, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 12 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            12
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 12 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS13( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 13; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 13 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 13; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 13 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 13 * sizeof(PyObject *) );
            memcpy( python_pars + 13, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 13 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 13 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 13; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 13 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 13 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 13, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 13 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 13 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (13 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 13 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (13 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 13 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 13, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 13 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            13
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 13 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS14( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 14; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 14 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 14; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 14 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 14 * sizeof(PyObject *) );
            memcpy( python_pars + 14, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 14 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 14 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 14; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 14 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 14 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 14, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 14 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 14 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (14 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 14 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (14 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 14 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 14, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 14 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            14
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 14 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS15( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 15; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 15 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 15; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 15 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 15 * sizeof(PyObject *) );
            memcpy( python_pars + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 15 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 15 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 15; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 15 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 15 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 15 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 15 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (15 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 15 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (15 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 15 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 15, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 15 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            15
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 15 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS16( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 16; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 16 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 16; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 16 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 16 * sizeof(PyObject *) );
            memcpy( python_pars + 16, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 16 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 16 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 16; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 16 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 16 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 16, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 16 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 16 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (16 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 16 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (16 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 16 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 16, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 16 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            16
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 16 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS17( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 17; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 17 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 17; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 17 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 17 * sizeof(PyObject *) );
            memcpy( python_pars + 17, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 17 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 17 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 17; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 17 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 17 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 17, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 17 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 17 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (17 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 17 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (17 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 17 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 17, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 17 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            17
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 17 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS18( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 18; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 18 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 18; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 18 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 18 * sizeof(PyObject *) );
            memcpy( python_pars + 18, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 18 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 18 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 18; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 18 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 18 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 18, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 18 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 18 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (18 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 18 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (18 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 18 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 18, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 18 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            18
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 18 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS20( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 20; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 20 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 20; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 20 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 20 * sizeof(PyObject *) );
            memcpy( python_pars + 20, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 20 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 20 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 20; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 20 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 20 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 20, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 20 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 20 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (20 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 20 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (20 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 20 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 20, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 20 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            20
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 20 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS21( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 21; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 21 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 21; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 21 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 21 * sizeof(PyObject *) );
            memcpy( python_pars + 21, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 21 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 21 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 21; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 21 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 21 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 21, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 21 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 21 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (21 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 21 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (21 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 21 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 21, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 21 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            21
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 21 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS24( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 24; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 24 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 24; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 24 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 24 * sizeof(PyObject *) );
            memcpy( python_pars + 24, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 24 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 24 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 24; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 24 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 24 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 24, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 24 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 24 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (24 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 24 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (24 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 24 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 24, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 24 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            24
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 24 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS32( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 32; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 32 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 32; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 32 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 32 * sizeof(PyObject *) );
            memcpy( python_pars + 32, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 32 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 32 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 32; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 32 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 32 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 32, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 32 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 32 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (32 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 32 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (32 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 32 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 32, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 32 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            32
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 32 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS4( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    4
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS4( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    4
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS4( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS4( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS5( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    5
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS5( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    5
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS5( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS5( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS6( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    6
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS6( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    6
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS6( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS6( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS7( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    7
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS7( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    7
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS7( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS7( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS8( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    8
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS8( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    8
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS8( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS8( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS9( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    9
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS9( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    9
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS9( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS9( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS9(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS9(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS10( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 10; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS10(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS10(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    10
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS10(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS10(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS10( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    10
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS10( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS10( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS10(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS10(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS10(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS11( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 11; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS11(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS11(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    11
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS11(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS11(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS11( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    11
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS11( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS11( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS11(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS11(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS11(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS12( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 12; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS12(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS12(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    12
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS12(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS12(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS12( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    12
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS12( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS12( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS12(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS12(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS12(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS13( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 13; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    13
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS13( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    13
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS13( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS13( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS13(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS13(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS14( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 14; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS14(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS14(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    14
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS14(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS14(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS14( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    14
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS14( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS14( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS14(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS14(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS14(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS20( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 20; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS20(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS20(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    20
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS20(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS20(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS20( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    20
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS20( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS20( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS20(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS20(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS20(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( PIL );
MOD_INIT_DECL( PIL$BmpImagePlugin );
MOD_INIT_DECL( PIL$GifImagePlugin );
MOD_INIT_DECL( PIL$GimpGradientFile );
MOD_INIT_DECL( PIL$GimpPaletteFile );
MOD_INIT_DECL( PIL$Image );
MOD_INIT_DECL( PIL$ImageChops );
MOD_INIT_DECL( PIL$ImageColor );
MOD_INIT_DECL( PIL$ImageFile );
MOD_INIT_DECL( PIL$ImageFilter );
MOD_INIT_DECL( PIL$ImageMode );
MOD_INIT_DECL( PIL$ImagePalette );
MOD_INIT_DECL( PIL$ImageQt );
MOD_INIT_DECL( PIL$ImageSequence );
MOD_INIT_DECL( PIL$ImageShow );
MOD_INIT_DECL( PIL$JpegImagePlugin );
MOD_INIT_DECL( PIL$JpegPresets );
MOD_INIT_DECL( PIL$MpoImagePlugin );
MOD_INIT_DECL( PIL$PaletteFile );
MOD_INIT_DECL( PIL$PngImagePlugin );
MOD_INIT_DECL( PIL$PpmImagePlugin );
MOD_INIT_DECL( PIL$PyAccess );
MOD_INIT_DECL( PIL$TiffImagePlugin );
MOD_INIT_DECL( PIL$TiffTags );
MOD_INIT_DECL( PIL$_binary );
MOD_INIT_DECL( PIL$_util );
MOD_INIT_DECL( PIL$_version );
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( certifi );
MOD_INIT_DECL( certifi$core );
MOD_INIT_DECL( chardet );
MOD_INIT_DECL( chardet$big5freq );
MOD_INIT_DECL( chardet$big5prober );
MOD_INIT_DECL( chardet$chardistribution );
MOD_INIT_DECL( chardet$charsetgroupprober );
MOD_INIT_DECL( chardet$charsetprober );
MOD_INIT_DECL( chardet$codingstatemachine );
MOD_INIT_DECL( chardet$compat );
MOD_INIT_DECL( chardet$cp949prober );
MOD_INIT_DECL( chardet$enums );
MOD_INIT_DECL( chardet$escprober );
MOD_INIT_DECL( chardet$escsm );
MOD_INIT_DECL( chardet$eucjpprober );
MOD_INIT_DECL( chardet$euckrfreq );
MOD_INIT_DECL( chardet$euckrprober );
MOD_INIT_DECL( chardet$euctwfreq );
MOD_INIT_DECL( chardet$euctwprober );
MOD_INIT_DECL( chardet$gb2312freq );
MOD_INIT_DECL( chardet$gb2312prober );
MOD_INIT_DECL( chardet$hebrewprober );
MOD_INIT_DECL( chardet$jisfreq );
MOD_INIT_DECL( chardet$jpcntx );
MOD_INIT_DECL( chardet$langbulgarianmodel );
MOD_INIT_DECL( chardet$langcyrillicmodel );
MOD_INIT_DECL( chardet$langgreekmodel );
MOD_INIT_DECL( chardet$langhebrewmodel );
MOD_INIT_DECL( chardet$langthaimodel );
MOD_INIT_DECL( chardet$langturkishmodel );
MOD_INIT_DECL( chardet$latin1prober );
MOD_INIT_DECL( chardet$mbcharsetprober );
MOD_INIT_DECL( chardet$mbcsgroupprober );
MOD_INIT_DECL( chardet$mbcssm );
MOD_INIT_DECL( chardet$sbcharsetprober );
MOD_INIT_DECL( chardet$sbcsgroupprober );
MOD_INIT_DECL( chardet$sjisprober );
MOD_INIT_DECL( chardet$universaldetector );
MOD_INIT_DECL( chardet$utf8prober );
MOD_INIT_DECL( chardet$version );
MOD_INIT_DECL( cycler );
MOD_INIT_DECL( dateutil );
MOD_INIT_DECL( dateutil$_common );
MOD_INIT_DECL( dateutil$_version );
MOD_INIT_DECL( dateutil$easter );
MOD_INIT_DECL( dateutil$parser );
MOD_INIT_DECL( dateutil$parser$_parser );
MOD_INIT_DECL( dateutil$parser$isoparser );
MOD_INIT_DECL( dateutil$relativedelta );
MOD_INIT_DECL( dateutil$rrule );
MOD_INIT_DECL( dateutil$tz );
MOD_INIT_DECL( dateutil$tz$_common );
MOD_INIT_DECL( dateutil$tz$_factories );
MOD_INIT_DECL( dateutil$tz$tz );
MOD_INIT_DECL( dateutil$tz$win );
MOD_INIT_DECL( dateutil$zoneinfo );
MOD_INIT_DECL( defusedxml );
MOD_INIT_DECL( defusedxml$ElementTree );
MOD_INIT_DECL( defusedxml$cElementTree );
MOD_INIT_DECL( defusedxml$common );
MOD_INIT_DECL( defusedxml$expatbuilder );
MOD_INIT_DECL( defusedxml$expatreader );
MOD_INIT_DECL( defusedxml$minidom );
MOD_INIT_DECL( defusedxml$pulldom );
MOD_INIT_DECL( defusedxml$sax );
MOD_INIT_DECL( defusedxml$xmlrpc );
MOD_INIT_DECL( h5py );
MOD_INIT_DECL( h5py$_hl );
MOD_INIT_DECL( h5py$_hl$attrs );
MOD_INIT_DECL( h5py$_hl$base );
MOD_INIT_DECL( h5py$_hl$compat );
MOD_INIT_DECL( h5py$_hl$dataset );
MOD_INIT_DECL( h5py$_hl$datatype );
MOD_INIT_DECL( h5py$_hl$dims );
MOD_INIT_DECL( h5py$_hl$files );
MOD_INIT_DECL( h5py$_hl$filters );
MOD_INIT_DECL( h5py$_hl$group );
MOD_INIT_DECL( h5py$_hl$selections );
MOD_INIT_DECL( h5py$_hl$selections2 );
MOD_INIT_DECL( h5py$_hl$vds );
MOD_INIT_DECL( h5py$h5py_warnings );
MOD_INIT_DECL( h5py$ipy_completer );
MOD_INIT_DECL( h5py$tests );
MOD_INIT_DECL( h5py$version );
MOD_INIT_DECL( idna );
MOD_INIT_DECL( idna$core );
MOD_INIT_DECL( idna$idnadata );
MOD_INIT_DECL( idna$intranges );
MOD_INIT_DECL( idna$package_data );
MOD_INIT_DECL( idna$uts46data );
MOD_INIT_DECL( matplotlib );
MOD_INIT_DECL( matplotlib$_cm );
MOD_INIT_DECL( matplotlib$_cm_listed );
MOD_INIT_DECL( matplotlib$_color_data );
MOD_INIT_DECL( matplotlib$_constrained_layout );
MOD_INIT_DECL( matplotlib$_layoutbox );
MOD_INIT_DECL( matplotlib$_mathtext_data );
MOD_INIT_DECL( matplotlib$_pylab_helpers );
MOD_INIT_DECL( matplotlib$_version );
MOD_INIT_DECL( matplotlib$afm );
MOD_INIT_DECL( matplotlib$artist );
MOD_INIT_DECL( matplotlib$axes );
MOD_INIT_DECL( matplotlib$axes$_axes );
MOD_INIT_DECL( matplotlib$axes$_base );
MOD_INIT_DECL( matplotlib$axes$_secondary_axes );
MOD_INIT_DECL( matplotlib$axes$_subplots );
MOD_INIT_DECL( matplotlib$axis );
MOD_INIT_DECL( matplotlib$backend_bases );
MOD_INIT_DECL( matplotlib$backend_tools );
MOD_INIT_DECL( matplotlib$backends );
MOD_INIT_DECL( matplotlib$backends$backend_agg );
MOD_INIT_DECL( matplotlib$backends$backend_webagg );
MOD_INIT_DECL( matplotlib$backends$backend_webagg_core );
MOD_INIT_DECL( matplotlib$bezier );
MOD_INIT_DECL( matplotlib$blocking_input );
MOD_INIT_DECL( matplotlib$category );
MOD_INIT_DECL( matplotlib$cbook );
MOD_INIT_DECL( matplotlib$cbook$deprecation );
MOD_INIT_DECL( matplotlib$cm );
MOD_INIT_DECL( matplotlib$collections );
MOD_INIT_DECL( matplotlib$colorbar );
MOD_INIT_DECL( matplotlib$colors );
MOD_INIT_DECL( matplotlib$container );
MOD_INIT_DECL( matplotlib$contour );
MOD_INIT_DECL( matplotlib$dates );
MOD_INIT_DECL( matplotlib$docstring );
MOD_INIT_DECL( matplotlib$dviread );
MOD_INIT_DECL( matplotlib$figure );
MOD_INIT_DECL( matplotlib$font_manager );
MOD_INIT_DECL( matplotlib$fontconfig_pattern );
MOD_INIT_DECL( matplotlib$gridspec );
MOD_INIT_DECL( matplotlib$hatch );
MOD_INIT_DECL( matplotlib$image );
MOD_INIT_DECL( matplotlib$legend );
MOD_INIT_DECL( matplotlib$legend_handler );
MOD_INIT_DECL( matplotlib$lines );
MOD_INIT_DECL( matplotlib$markers );
MOD_INIT_DECL( matplotlib$mathtext );
MOD_INIT_DECL( matplotlib$mlab );
MOD_INIT_DECL( matplotlib$offsetbox );
MOD_INIT_DECL( matplotlib$patches );
MOD_INIT_DECL( matplotlib$path );
MOD_INIT_DECL( matplotlib$patheffects );
MOD_INIT_DECL( matplotlib$projections );
MOD_INIT_DECL( matplotlib$projections$geo );
MOD_INIT_DECL( matplotlib$projections$polar );
MOD_INIT_DECL( matplotlib$pyplot );
MOD_INIT_DECL( matplotlib$quiver );
MOD_INIT_DECL( matplotlib$rcsetup );
MOD_INIT_DECL( matplotlib$scale );
MOD_INIT_DECL( matplotlib$spines );
MOD_INIT_DECL( matplotlib$stackplot );
MOD_INIT_DECL( matplotlib$streamplot );
MOD_INIT_DECL( matplotlib$style );
MOD_INIT_DECL( matplotlib$style$core );
MOD_INIT_DECL( matplotlib$table );
MOD_INIT_DECL( matplotlib$texmanager );
MOD_INIT_DECL( matplotlib$text );
MOD_INIT_DECL( matplotlib$textpath );
MOD_INIT_DECL( matplotlib$ticker );
MOD_INIT_DECL( matplotlib$tight_bbox );
MOD_INIT_DECL( matplotlib$tight_layout );
MOD_INIT_DECL( matplotlib$transforms );
MOD_INIT_DECL( matplotlib$tri );
MOD_INIT_DECL( matplotlib$tri$triangulation );
MOD_INIT_DECL( matplotlib$tri$tricontour );
MOD_INIT_DECL( matplotlib$tri$trifinder );
MOD_INIT_DECL( matplotlib$tri$triinterpolate );
MOD_INIT_DECL( matplotlib$tri$tripcolor );
MOD_INIT_DECL( matplotlib$tri$triplot );
MOD_INIT_DECL( matplotlib$tri$trirefine );
MOD_INIT_DECL( matplotlib$tri$tritools );
MOD_INIT_DECL( matplotlib$units );
MOD_INIT_DECL( matplotlib$widgets );
MOD_INIT_DECL( model );
MOD_INIT_DECL( model$aerodynamic_forces );
MOD_INIT_DECL( model$aerodynamic_forces$aerodynamic_forces );
MOD_INIT_DECL( model$aerodynamic_forces$atmosphere_model );
MOD_INIT_DECL( model$aerodynamic_forces$drag_model_open_rocket );
MOD_INIT_DECL( model$aerodynamic_forces$stability_model_open_rocket );
MOD_INIT_DECL( model$constants );
MOD_INIT_DECL( model$entities );
MOD_INIT_DECL( model$entities$event_entities );
MOD_INIT_DECL( model$entities$flight_data_entities );
MOD_INIT_DECL( model$entities$motor_data_entities );
MOD_INIT_DECL( model$entities$rocket_entities );
MOD_INIT_DECL( model$file_io );
MOD_INIT_DECL( model$filters );
MOD_INIT_DECL( model$flight_phase );
MOD_INIT_DECL( model$gravity_model );
MOD_INIT_DECL( model$serial_transfer );
MOD_INIT_DECL( model$simulation_engine );
MOD_INIT_DECL( model$test_rocket );
MOD_INIT_DECL( model$thrust_curve_data_retrieve );
MOD_INIT_DECL( numpy );
MOD_INIT_DECL( numpy$__config__ );
MOD_INIT_DECL( numpy$_distributor_init );
MOD_INIT_DECL( numpy$_globals );
MOD_INIT_DECL( numpy$_pytesttester );
MOD_INIT_DECL( numpy$compat );
MOD_INIT_DECL( numpy$compat$_inspect );
MOD_INIT_DECL( numpy$compat$py3k );
MOD_INIT_DECL( numpy$core );
MOD_INIT_DECL( numpy$core$_add_newdocs );
MOD_INIT_DECL( numpy$core$_asarray );
MOD_INIT_DECL( numpy$core$_dtype );
MOD_INIT_DECL( numpy$core$_dtype_ctypes );
MOD_INIT_DECL( numpy$core$_exceptions );
MOD_INIT_DECL( numpy$core$_internal );
MOD_INIT_DECL( numpy$core$_methods );
MOD_INIT_DECL( numpy$core$_string_helpers );
MOD_INIT_DECL( numpy$core$_type_aliases );
MOD_INIT_DECL( numpy$core$_ufunc_config );
MOD_INIT_DECL( numpy$core$arrayprint );
MOD_INIT_DECL( numpy$core$defchararray );
MOD_INIT_DECL( numpy$core$einsumfunc );
MOD_INIT_DECL( numpy$core$fromnumeric );
MOD_INIT_DECL( numpy$core$function_base );
MOD_INIT_DECL( numpy$core$getlimits );
MOD_INIT_DECL( numpy$core$info );
MOD_INIT_DECL( numpy$core$machar );
MOD_INIT_DECL( numpy$core$memmap );
MOD_INIT_DECL( numpy$core$multiarray );
MOD_INIT_DECL( numpy$core$numeric );
MOD_INIT_DECL( numpy$core$numerictypes );
MOD_INIT_DECL( numpy$core$overrides );
MOD_INIT_DECL( numpy$core$records );
MOD_INIT_DECL( numpy$core$shape_base );
MOD_INIT_DECL( numpy$core$umath );
MOD_INIT_DECL( numpy$ctypeslib );
MOD_INIT_DECL( numpy$dual );
MOD_INIT_DECL( numpy$fft );
MOD_INIT_DECL( numpy$fft$helper );
MOD_INIT_DECL( numpy$fft$info );
MOD_INIT_DECL( numpy$fft$pocketfft );
MOD_INIT_DECL( numpy$lib );
MOD_INIT_DECL( numpy$lib$_datasource );
MOD_INIT_DECL( numpy$lib$_iotools );
MOD_INIT_DECL( numpy$lib$_version );
MOD_INIT_DECL( numpy$lib$arraypad );
MOD_INIT_DECL( numpy$lib$arraysetops );
MOD_INIT_DECL( numpy$lib$arrayterator );
MOD_INIT_DECL( numpy$lib$financial );
MOD_INIT_DECL( numpy$lib$format );
MOD_INIT_DECL( numpy$lib$function_base );
MOD_INIT_DECL( numpy$lib$histograms );
MOD_INIT_DECL( numpy$lib$index_tricks );
MOD_INIT_DECL( numpy$lib$info );
MOD_INIT_DECL( numpy$lib$mixins );
MOD_INIT_DECL( numpy$lib$nanfunctions );
MOD_INIT_DECL( numpy$lib$npyio );
MOD_INIT_DECL( numpy$lib$polynomial );
MOD_INIT_DECL( numpy$lib$scimath );
MOD_INIT_DECL( numpy$lib$shape_base );
MOD_INIT_DECL( numpy$lib$stride_tricks );
MOD_INIT_DECL( numpy$lib$twodim_base );
MOD_INIT_DECL( numpy$lib$type_check );
MOD_INIT_DECL( numpy$lib$ufunclike );
MOD_INIT_DECL( numpy$lib$utils );
MOD_INIT_DECL( numpy$linalg );
MOD_INIT_DECL( numpy$linalg$info );
MOD_INIT_DECL( numpy$linalg$linalg );
MOD_INIT_DECL( numpy$ma );
MOD_INIT_DECL( numpy$ma$core );
MOD_INIT_DECL( numpy$ma$extras );
MOD_INIT_DECL( numpy$ma$mrecords );
MOD_INIT_DECL( numpy$matrixlib );
MOD_INIT_DECL( numpy$matrixlib$defmatrix );
MOD_INIT_DECL( numpy$polynomial );
MOD_INIT_DECL( numpy$polynomial$_polybase );
MOD_INIT_DECL( numpy$polynomial$chebyshev );
MOD_INIT_DECL( numpy$polynomial$hermite );
MOD_INIT_DECL( numpy$polynomial$hermite_e );
MOD_INIT_DECL( numpy$polynomial$laguerre );
MOD_INIT_DECL( numpy$polynomial$legendre );
MOD_INIT_DECL( numpy$polynomial$polynomial );
MOD_INIT_DECL( numpy$polynomial$polyutils );
MOD_INIT_DECL( numpy$random );
MOD_INIT_DECL( numpy$random$_pickle );
MOD_INIT_DECL( numpy$version );
MOD_INIT_DECL( pyparsing );
MOD_INIT_DECL( requests );
MOD_INIT_DECL( requests$__version__ );
MOD_INIT_DECL( requests$_internal_utils );
MOD_INIT_DECL( requests$adapters );
MOD_INIT_DECL( requests$api );
MOD_INIT_DECL( requests$auth );
MOD_INIT_DECL( requests$certs );
MOD_INIT_DECL( requests$compat );
MOD_INIT_DECL( requests$cookies );
MOD_INIT_DECL( requests$exceptions );
MOD_INIT_DECL( requests$hooks );
MOD_INIT_DECL( requests$models );
MOD_INIT_DECL( requests$packages );
MOD_INIT_DECL( requests$sessions );
MOD_INIT_DECL( requests$status_codes );
MOD_INIT_DECL( requests$structures );
MOD_INIT_DECL( requests$utils );
MOD_INIT_DECL( scipy );
MOD_INIT_DECL( scipy$__config__ );
MOD_INIT_DECL( scipy$_distributor_init );
MOD_INIT_DECL( scipy$_lib );
MOD_INIT_DECL( scipy$_lib$_ccallback );
MOD_INIT_DECL( scipy$_lib$_numpy_compat );
MOD_INIT_DECL( scipy$_lib$_testutils );
MOD_INIT_DECL( scipy$_lib$_threadsafety );
MOD_INIT_DECL( scipy$_lib$_util );
MOD_INIT_DECL( scipy$_lib$_version );
MOD_INIT_DECL( scipy$_lib$decorator );
MOD_INIT_DECL( scipy$_lib$six );
MOD_INIT_DECL( scipy$integrate );
MOD_INIT_DECL( scipy$integrate$_bvp );
MOD_INIT_DECL( scipy$integrate$_ivp );
MOD_INIT_DECL( scipy$integrate$_ivp$base );
MOD_INIT_DECL( scipy$integrate$_ivp$bdf );
MOD_INIT_DECL( scipy$integrate$_ivp$common );
MOD_INIT_DECL( scipy$integrate$_ivp$ivp );
MOD_INIT_DECL( scipy$integrate$_ivp$lsoda );
MOD_INIT_DECL( scipy$integrate$_ivp$radau );
MOD_INIT_DECL( scipy$integrate$_ivp$rk );
MOD_INIT_DECL( scipy$integrate$_ode );
MOD_INIT_DECL( scipy$integrate$odepack );
MOD_INIT_DECL( scipy$integrate$quadpack );
MOD_INIT_DECL( scipy$integrate$quadrature );
MOD_INIT_DECL( scipy$interpolate );
MOD_INIT_DECL( scipy$interpolate$_bsplines );
MOD_INIT_DECL( scipy$interpolate$_cubic );
MOD_INIT_DECL( scipy$interpolate$_fitpack_impl );
MOD_INIT_DECL( scipy$interpolate$_pade );
MOD_INIT_DECL( scipy$interpolate$fitpack );
MOD_INIT_DECL( scipy$interpolate$fitpack2 );
MOD_INIT_DECL( scipy$interpolate$interpolate );
MOD_INIT_DECL( scipy$interpolate$ndgriddata );
MOD_INIT_DECL( scipy$interpolate$polyint );
MOD_INIT_DECL( scipy$interpolate$rbf );
MOD_INIT_DECL( scipy$linalg );
MOD_INIT_DECL( scipy$linalg$_decomp_ldl );
MOD_INIT_DECL( scipy$linalg$_decomp_polar );
MOD_INIT_DECL( scipy$linalg$_decomp_qz );
MOD_INIT_DECL( scipy$linalg$_expm_frechet );
MOD_INIT_DECL( scipy$linalg$_matfuncs_inv_ssq );
MOD_INIT_DECL( scipy$linalg$_matfuncs_sqrtm );
MOD_INIT_DECL( scipy$linalg$_procrustes );
MOD_INIT_DECL( scipy$linalg$_sketches );
MOD_INIT_DECL( scipy$linalg$_solvers );
MOD_INIT_DECL( scipy$linalg$basic );
MOD_INIT_DECL( scipy$linalg$blas );
MOD_INIT_DECL( scipy$linalg$decomp );
MOD_INIT_DECL( scipy$linalg$decomp_cholesky );
MOD_INIT_DECL( scipy$linalg$decomp_lu );
MOD_INIT_DECL( scipy$linalg$decomp_qr );
MOD_INIT_DECL( scipy$linalg$decomp_schur );
MOD_INIT_DECL( scipy$linalg$decomp_svd );
MOD_INIT_DECL( scipy$linalg$flinalg );
MOD_INIT_DECL( scipy$linalg$lapack );
MOD_INIT_DECL( scipy$linalg$linalg_version );
MOD_INIT_DECL( scipy$linalg$matfuncs );
MOD_INIT_DECL( scipy$linalg$misc );
MOD_INIT_DECL( scipy$linalg$special_matrices );
MOD_INIT_DECL( scipy$optimize );
MOD_INIT_DECL( scipy$optimize$_basinhopping );
MOD_INIT_DECL( scipy$optimize$_constraints );
MOD_INIT_DECL( scipy$optimize$_differentiable_functions );
MOD_INIT_DECL( scipy$optimize$_differentialevolution );
MOD_INIT_DECL( scipy$optimize$_dual_annealing );
MOD_INIT_DECL( scipy$optimize$_hessian_update_strategy );
MOD_INIT_DECL( scipy$optimize$_hungarian );
MOD_INIT_DECL( scipy$optimize$_linprog );
MOD_INIT_DECL( scipy$optimize$_linprog_ip );
MOD_INIT_DECL( scipy$optimize$_linprog_rs );
MOD_INIT_DECL( scipy$optimize$_linprog_simplex );
MOD_INIT_DECL( scipy$optimize$_linprog_util );
MOD_INIT_DECL( scipy$optimize$_lsq );
MOD_INIT_DECL( scipy$optimize$_lsq$bvls );
MOD_INIT_DECL( scipy$optimize$_lsq$common );
MOD_INIT_DECL( scipy$optimize$_lsq$dogbox );
MOD_INIT_DECL( scipy$optimize$_lsq$least_squares );
MOD_INIT_DECL( scipy$optimize$_lsq$lsq_linear );
MOD_INIT_DECL( scipy$optimize$_lsq$trf );
MOD_INIT_DECL( scipy$optimize$_lsq$trf_linear );
MOD_INIT_DECL( scipy$optimize$_minimize );
MOD_INIT_DECL( scipy$optimize$_numdiff );
MOD_INIT_DECL( scipy$optimize$_remove_redundancy );
MOD_INIT_DECL( scipy$optimize$_root );
MOD_INIT_DECL( scipy$optimize$_root_scalar );
MOD_INIT_DECL( scipy$optimize$_shgo );
MOD_INIT_DECL( scipy$optimize$_shgo_lib );
MOD_INIT_DECL( scipy$optimize$_shgo_lib$sobol_seq );
MOD_INIT_DECL( scipy$optimize$_shgo_lib$triangulation );
MOD_INIT_DECL( scipy$optimize$_spectral );
MOD_INIT_DECL( scipy$optimize$_trlib );
MOD_INIT_DECL( scipy$optimize$_trustregion );
MOD_INIT_DECL( scipy$optimize$_trustregion_constr );
MOD_INIT_DECL( scipy$optimize$_trustregion_constr$canonical_constraint );
MOD_INIT_DECL( scipy$optimize$_trustregion_constr$equality_constrained_sqp );
MOD_INIT_DECL( scipy$optimize$_trustregion_constr$minimize_trustregion_constr );
MOD_INIT_DECL( scipy$optimize$_trustregion_constr$projections );
MOD_INIT_DECL( scipy$optimize$_trustregion_constr$qp_subproblem );
MOD_INIT_DECL( scipy$optimize$_trustregion_constr$report );
MOD_INIT_DECL( scipy$optimize$_trustregion_constr$tr_interior_point );
MOD_INIT_DECL( scipy$optimize$_trustregion_dogleg );
MOD_INIT_DECL( scipy$optimize$_trustregion_exact );
MOD_INIT_DECL( scipy$optimize$_trustregion_krylov );
MOD_INIT_DECL( scipy$optimize$_trustregion_ncg );
MOD_INIT_DECL( scipy$optimize$cobyla );
MOD_INIT_DECL( scipy$optimize$lbfgsb );
MOD_INIT_DECL( scipy$optimize$linesearch );
MOD_INIT_DECL( scipy$optimize$minpack );
MOD_INIT_DECL( scipy$optimize$nnls );
MOD_INIT_DECL( scipy$optimize$nonlin );
MOD_INIT_DECL( scipy$optimize$optimize );
MOD_INIT_DECL( scipy$optimize$slsqp );
MOD_INIT_DECL( scipy$optimize$tnc );
MOD_INIT_DECL( scipy$optimize$zeros );
MOD_INIT_DECL( scipy$sparse );
MOD_INIT_DECL( scipy$sparse$_index );
MOD_INIT_DECL( scipy$sparse$_matrix_io );
MOD_INIT_DECL( scipy$sparse$base );
MOD_INIT_DECL( scipy$sparse$bsr );
MOD_INIT_DECL( scipy$sparse$compressed );
MOD_INIT_DECL( scipy$sparse$construct );
MOD_INIT_DECL( scipy$sparse$coo );
MOD_INIT_DECL( scipy$sparse$csc );
MOD_INIT_DECL( scipy$sparse$csgraph );
MOD_INIT_DECL( scipy$sparse$csgraph$_laplacian );
MOD_INIT_DECL( scipy$sparse$csgraph$_validation );
MOD_INIT_DECL( scipy$sparse$csr );
MOD_INIT_DECL( scipy$sparse$data );
MOD_INIT_DECL( scipy$sparse$dia );
MOD_INIT_DECL( scipy$sparse$dok );
MOD_INIT_DECL( scipy$sparse$extract );
MOD_INIT_DECL( scipy$sparse$lil );
MOD_INIT_DECL( scipy$sparse$linalg );
MOD_INIT_DECL( scipy$sparse$linalg$_expm_multiply );
MOD_INIT_DECL( scipy$sparse$linalg$_norm );
MOD_INIT_DECL( scipy$sparse$linalg$_onenormest );
MOD_INIT_DECL( scipy$sparse$linalg$dsolve );
MOD_INIT_DECL( scipy$sparse$linalg$dsolve$_add_newdocs );
MOD_INIT_DECL( scipy$sparse$linalg$dsolve$linsolve );
MOD_INIT_DECL( scipy$sparse$linalg$eigen );
MOD_INIT_DECL( scipy$sparse$linalg$eigen$arpack );
MOD_INIT_DECL( scipy$sparse$linalg$eigen$arpack$arpack );
MOD_INIT_DECL( scipy$sparse$linalg$eigen$lobpcg );
MOD_INIT_DECL( scipy$sparse$linalg$eigen$lobpcg$lobpcg );
MOD_INIT_DECL( scipy$sparse$linalg$interface );
MOD_INIT_DECL( scipy$sparse$linalg$isolve );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$_gcrotmk );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$iterative );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$lgmres );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$lsmr );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$lsqr );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$minres );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$utils );
MOD_INIT_DECL( scipy$sparse$linalg$matfuncs );
MOD_INIT_DECL( scipy$sparse$spfuncs );
MOD_INIT_DECL( scipy$sparse$sputils );
MOD_INIT_DECL( scipy$spatial );
MOD_INIT_DECL( scipy$spatial$_plotutils );
MOD_INIT_DECL( scipy$spatial$_procrustes );
MOD_INIT_DECL( scipy$spatial$_spherical_voronoi );
MOD_INIT_DECL( scipy$spatial$distance );
MOD_INIT_DECL( scipy$spatial$kdtree );
MOD_INIT_DECL( scipy$spatial$transform );
MOD_INIT_DECL( scipy$spatial$transform$_rotation_spline );
MOD_INIT_DECL( scipy$spatial$transform$rotation );
MOD_INIT_DECL( scipy$special );
MOD_INIT_DECL( scipy$special$_ellip_harm );
MOD_INIT_DECL( scipy$special$_logsumexp );
MOD_INIT_DECL( scipy$special$_spherical_bessel );
MOD_INIT_DECL( scipy$special$basic );
MOD_INIT_DECL( scipy$special$lambertw );
MOD_INIT_DECL( scipy$special$orthogonal );
MOD_INIT_DECL( scipy$special$sf_error );
MOD_INIT_DECL( scipy$special$spfun_stats );
MOD_INIT_DECL( scipy$version );
MOD_INIT_DECL( serial );
MOD_INIT_DECL( serial$serialcli );
MOD_INIT_DECL( serial$serialjava );
MOD_INIT_DECL( serial$serialposix );
MOD_INIT_DECL( serial$serialutil );
MOD_INIT_DECL( serial$serialwin32 );
MOD_INIT_DECL( serial$tools );
MOD_INIT_DECL( serial$tools$list_ports );
MOD_INIT_DECL( serial$tools$list_ports_common );
MOD_INIT_DECL( serial$tools$list_ports_linux );
MOD_INIT_DECL( serial$tools$list_ports_osx );
MOD_INIT_DECL( serial$tools$list_ports_posix );
MOD_INIT_DECL( serial$tools$list_ports_windows );
MOD_INIT_DECL( serial$win32 );
MOD_INIT_DECL( six );
MOD_INIT_DECL( urllib3 );
MOD_INIT_DECL( urllib3$_collections );
MOD_INIT_DECL( urllib3$connection );
MOD_INIT_DECL( urllib3$connectionpool );
MOD_INIT_DECL( urllib3$contrib );
MOD_INIT_DECL( urllib3$contrib$_appengine_environ );
MOD_INIT_DECL( urllib3$contrib$pyopenssl );
MOD_INIT_DECL( urllib3$contrib$socks );
MOD_INIT_DECL( urllib3$exceptions );
MOD_INIT_DECL( urllib3$fields );
MOD_INIT_DECL( urllib3$filepost );
MOD_INIT_DECL( urllib3$packages );
MOD_INIT_DECL( urllib3$packages$backports );
MOD_INIT_DECL( urllib3$packages$backports$makefile );
MOD_INIT_DECL( urllib3$packages$rfc3986 );
MOD_INIT_DECL( urllib3$packages$rfc3986$_mixin );
MOD_INIT_DECL( urllib3$packages$rfc3986$abnf_regexp );
MOD_INIT_DECL( urllib3$packages$rfc3986$api );
MOD_INIT_DECL( urllib3$packages$rfc3986$compat );
MOD_INIT_DECL( urllib3$packages$rfc3986$exceptions );
MOD_INIT_DECL( urllib3$packages$rfc3986$iri );
MOD_INIT_DECL( urllib3$packages$rfc3986$misc );
MOD_INIT_DECL( urllib3$packages$rfc3986$normalizers );
MOD_INIT_DECL( urllib3$packages$rfc3986$parseresult );
MOD_INIT_DECL( urllib3$packages$rfc3986$uri );
MOD_INIT_DECL( urllib3$packages$rfc3986$validators );
MOD_INIT_DECL( urllib3$packages$six );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname$_implementation );
MOD_INIT_DECL( urllib3$poolmanager );
MOD_INIT_DECL( urllib3$request );
MOD_INIT_DECL( urllib3$response );
MOD_INIT_DECL( urllib3$util );
MOD_INIT_DECL( urllib3$util$connection );
MOD_INIT_DECL( urllib3$util$queue );
MOD_INIT_DECL( urllib3$util$request );
MOD_INIT_DECL( urllib3$util$response );
MOD_INIT_DECL( urllib3$util$retry );
MOD_INIT_DECL( urllib3$util$ssl_ );
MOD_INIT_DECL( urllib3$util$timeout );
MOD_INIT_DECL( urllib3$util$url );
MOD_INIT_DECL( urllib3$util$wait );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { "PIL", MOD_INIT_NAME( PIL ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "PIL.BmpImagePlugin", MOD_INIT_NAME( PIL$BmpImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.GifImagePlugin", MOD_INIT_NAME( PIL$GifImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.GimpGradientFile", MOD_INIT_NAME( PIL$GimpGradientFile ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.GimpPaletteFile", MOD_INIT_NAME( PIL$GimpPaletteFile ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.Image", MOD_INIT_NAME( PIL$Image ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.ImageChops", MOD_INIT_NAME( PIL$ImageChops ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.ImageColor", MOD_INIT_NAME( PIL$ImageColor ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.ImageFile", MOD_INIT_NAME( PIL$ImageFile ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.ImageFilter", MOD_INIT_NAME( PIL$ImageFilter ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.ImageMode", MOD_INIT_NAME( PIL$ImageMode ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.ImagePalette", MOD_INIT_NAME( PIL$ImagePalette ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.ImageQt", MOD_INIT_NAME( PIL$ImageQt ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.ImageSequence", MOD_INIT_NAME( PIL$ImageSequence ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.ImageShow", MOD_INIT_NAME( PIL$ImageShow ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.JpegImagePlugin", MOD_INIT_NAME( PIL$JpegImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.JpegPresets", MOD_INIT_NAME( PIL$JpegPresets ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.MpoImagePlugin", MOD_INIT_NAME( PIL$MpoImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.PaletteFile", MOD_INIT_NAME( PIL$PaletteFile ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.PngImagePlugin", MOD_INIT_NAME( PIL$PngImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.PpmImagePlugin", MOD_INIT_NAME( PIL$PpmImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.PyAccess", MOD_INIT_NAME( PIL$PyAccess ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.TiffImagePlugin", MOD_INIT_NAME( PIL$TiffImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL.TiffTags", MOD_INIT_NAME( PIL$TiffTags ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL._binary", MOD_INIT_NAME( PIL$_binary ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL._imaging", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "PIL._util", MOD_INIT_NAME( PIL$_util ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PIL._version", MOD_INIT_NAME( PIL$_version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_msi", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_overlapped", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "abc", NULL, 5976604, 7548, NUITKA_BYTECODE_FLAG },
    { "argparse", NULL, 5984152, 60223, NUITKA_BYTECODE_FLAG },
    { "ast", NULL, 6044375, 11737, NUITKA_BYTECODE_FLAG },
    { "base64", NULL, 6056112, 17168, NUITKA_BYTECODE_FLAG },
    { "bisect", NULL, 6073280, 2709, NUITKA_BYTECODE_FLAG },
    { "bz2", NULL, 6075989, 11315, NUITKA_BYTECODE_FLAG },
    { "calendar", NULL, 6087304, 25915, NUITKA_BYTECODE_FLAG },
    { "certifi", MOD_INIT_NAME( certifi ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "certifi.core", MOD_INIT_NAME( certifi$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet", MOD_INIT_NAME( chardet ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "chardet.big5freq", MOD_INIT_NAME( chardet$big5freq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.big5prober", MOD_INIT_NAME( chardet$big5prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.chardistribution", MOD_INIT_NAME( chardet$chardistribution ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.charsetgroupprober", MOD_INIT_NAME( chardet$charsetgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.charsetprober", MOD_INIT_NAME( chardet$charsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.codingstatemachine", MOD_INIT_NAME( chardet$codingstatemachine ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.compat", MOD_INIT_NAME( chardet$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.cp949prober", MOD_INIT_NAME( chardet$cp949prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.enums", MOD_INIT_NAME( chardet$enums ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.escprober", MOD_INIT_NAME( chardet$escprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.escsm", MOD_INIT_NAME( chardet$escsm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.eucjpprober", MOD_INIT_NAME( chardet$eucjpprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.euckrfreq", MOD_INIT_NAME( chardet$euckrfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.euckrprober", MOD_INIT_NAME( chardet$euckrprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.euctwfreq", MOD_INIT_NAME( chardet$euctwfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.euctwprober", MOD_INIT_NAME( chardet$euctwprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.gb2312freq", MOD_INIT_NAME( chardet$gb2312freq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.gb2312prober", MOD_INIT_NAME( chardet$gb2312prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.hebrewprober", MOD_INIT_NAME( chardet$hebrewprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.jisfreq", MOD_INIT_NAME( chardet$jisfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.jpcntx", MOD_INIT_NAME( chardet$jpcntx ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langbulgarianmodel", MOD_INIT_NAME( chardet$langbulgarianmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langcyrillicmodel", MOD_INIT_NAME( chardet$langcyrillicmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langgreekmodel", MOD_INIT_NAME( chardet$langgreekmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langhebrewmodel", MOD_INIT_NAME( chardet$langhebrewmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langthaimodel", MOD_INIT_NAME( chardet$langthaimodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.langturkishmodel", MOD_INIT_NAME( chardet$langturkishmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.latin1prober", MOD_INIT_NAME( chardet$latin1prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.mbcharsetprober", MOD_INIT_NAME( chardet$mbcharsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.mbcsgroupprober", MOD_INIT_NAME( chardet$mbcsgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.mbcssm", MOD_INIT_NAME( chardet$mbcssm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.sbcharsetprober", MOD_INIT_NAME( chardet$sbcharsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.sbcsgroupprober", MOD_INIT_NAME( chardet$sbcsgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.sjisprober", MOD_INIT_NAME( chardet$sjisprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.universaldetector", MOD_INIT_NAME( chardet$universaldetector ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.utf8prober", MOD_INIT_NAME( chardet$utf8prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { "chardet.version", MOD_INIT_NAME( chardet$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "codecs", NULL, 6113219, 33933, NUITKA_BYTECODE_FLAG },
    { "collections", NULL, 6147152, 45849, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "colorsys", NULL, 6193001, 3344, NUITKA_BYTECODE_FLAG },
    { "configparser", NULL, 6196345, 45259, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 6241604, 11191, NUITKA_BYTECODE_FLAG },
    { "copy", NULL, 6252795, 7112, NUITKA_BYTECODE_FLAG },
    { "copyreg", NULL, 6259907, 4277, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 6264184, 11888, NUITKA_BYTECODE_FLAG },
    { "ctypes", NULL, 6276072, 16093, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes.util", NULL, 6292165, 7259, NUITKA_BYTECODE_FLAG },
    { "ctypes.wintypes", NULL, 6299424, 5128, NUITKA_BYTECODE_FLAG },
    { "cycler", MOD_INIT_NAME( cycler ), 0, 0, NUITKA_COMPILED_MODULE },
    { "datetime", NULL, 6304552, 53771, NUITKA_BYTECODE_FLAG },
    { "dateutil", MOD_INIT_NAME( dateutil ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "dateutil._common", MOD_INIT_NAME( dateutil$_common ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil._version", MOD_INIT_NAME( dateutil$_version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.easter", MOD_INIT_NAME( dateutil$easter ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.parser", MOD_INIT_NAME( dateutil$parser ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "dateutil.parser._parser", MOD_INIT_NAME( dateutil$parser$_parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.parser.isoparser", MOD_INIT_NAME( dateutil$parser$isoparser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.relativedelta", MOD_INIT_NAME( dateutil$relativedelta ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.rrule", MOD_INIT_NAME( dateutil$rrule ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.tz", MOD_INIT_NAME( dateutil$tz ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "dateutil.tz._common", MOD_INIT_NAME( dateutil$tz$_common ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.tz._factories", MOD_INIT_NAME( dateutil$tz$_factories ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.tz.tz", MOD_INIT_NAME( dateutil$tz$tz ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.tz.win", MOD_INIT_NAME( dateutil$tz$win ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dateutil.zoneinfo", MOD_INIT_NAME( dateutil$zoneinfo ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "defusedxml", MOD_INIT_NAME( defusedxml ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "defusedxml.ElementTree", MOD_INIT_NAME( defusedxml$ElementTree ), 0, 0, NUITKA_COMPILED_MODULE },
    { "defusedxml.cElementTree", MOD_INIT_NAME( defusedxml$cElementTree ), 0, 0, NUITKA_COMPILED_MODULE },
    { "defusedxml.common", MOD_INIT_NAME( defusedxml$common ), 0, 0, NUITKA_COMPILED_MODULE },
    { "defusedxml.expatbuilder", MOD_INIT_NAME( defusedxml$expatbuilder ), 0, 0, NUITKA_COMPILED_MODULE },
    { "defusedxml.expatreader", MOD_INIT_NAME( defusedxml$expatreader ), 0, 0, NUITKA_COMPILED_MODULE },
    { "defusedxml.minidom", MOD_INIT_NAME( defusedxml$minidom ), 0, 0, NUITKA_COMPILED_MODULE },
    { "defusedxml.pulldom", MOD_INIT_NAME( defusedxml$pulldom ), 0, 0, NUITKA_COMPILED_MODULE },
    { "defusedxml.sax", MOD_INIT_NAME( defusedxml$sax ), 0, 0, NUITKA_COMPILED_MODULE },
    { "defusedxml.xmlrpc", MOD_INIT_NAME( defusedxml$xmlrpc ), 0, 0, NUITKA_COMPILED_MODULE },
    { "distutils", NULL, 6358323, 409, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.ccompiler", NULL, 6358732, 33378, NUITKA_BYTECODE_FLAG },
    { "distutils.errors", NULL, 6392110, 5505, NUITKA_BYTECODE_FLAG },
    { "distutils.log", NULL, 6397615, 2292, NUITKA_BYTECODE_FLAG },
    { "distutils.sysconfig", NULL, 6399907, 11910, NUITKA_BYTECODE_FLAG },
    { "distutils.unixccompiler", NULL, 6411817, 6561, NUITKA_BYTECODE_FLAG },
    { "distutils.version", NULL, 6418378, 7385, NUITKA_BYTECODE_FLAG },
    { "dummy_threading", NULL, 6425763, 1135, NUITKA_BYTECODE_FLAG },
    { "email", NULL, 6426898, 1702, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email.utils", NULL, 6428600, 9907, NUITKA_BYTECODE_FLAG },
    { "encodings", NULL, 6438507, 3963, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "encodings.idna", NULL, 6442470, 5798, NUITKA_BYTECODE_FLAG },
    { "enum", NULL, 6448268, 23439, NUITKA_BYTECODE_FLAG },
    { "fnmatch", NULL, 6471707, 2907, NUITKA_BYTECODE_FLAG },
    { "fractions", NULL, 6474614, 18459, NUITKA_BYTECODE_FLAG },
    { "functools", NULL, 6493073, 23960, NUITKA_BYTECODE_FLAG },
    { "glob", NULL, 6517033, 4292, NUITKA_BYTECODE_FLAG },
    { "gzip", NULL, 6521325, 16259, NUITKA_BYTECODE_FLAG },
    { "h5py", MOD_INIT_NAME( h5py ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "h5py._conv", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py._errors", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py._hl", MOD_INIT_NAME( h5py$_hl ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "h5py._hl.attrs", MOD_INIT_NAME( h5py$_hl$attrs ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.base", MOD_INIT_NAME( h5py$_hl$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.compat", MOD_INIT_NAME( h5py$_hl$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.dataset", MOD_INIT_NAME( h5py$_hl$dataset ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.datatype", MOD_INIT_NAME( h5py$_hl$datatype ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.dims", MOD_INIT_NAME( h5py$_hl$dims ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.files", MOD_INIT_NAME( h5py$_hl$files ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.filters", MOD_INIT_NAME( h5py$_hl$filters ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.group", MOD_INIT_NAME( h5py$_hl$group ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.selections", MOD_INIT_NAME( h5py$_hl$selections ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.selections2", MOD_INIT_NAME( h5py$_hl$selections2 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._hl.vds", MOD_INIT_NAME( h5py$_hl$vds ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py._objects", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5a", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5d", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5ds", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5f", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5fd", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5g", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5i", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5l", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5o", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5p", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5pl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5py_warnings", MOD_INIT_NAME( h5py$h5py_warnings ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py.h5r", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5s", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5t", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.h5z", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "h5py.ipy_completer", MOD_INIT_NAME( h5py$ipy_completer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "h5py.tests", MOD_INIT_NAME( h5py$tests ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "h5py.version", MOD_INIT_NAME( h5py$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "hashlib", NULL, 6537584, 6669, NUITKA_BYTECODE_FLAG },
    { "heapq", NULL, 6544253, 14325, NUITKA_BYTECODE_FLAG },
    { "hmac", NULL, 6558578, 4869, NUITKA_BYTECODE_FLAG },
    { "http", NULL, 6563447, 6560, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "http.cookies", NULL, 6570007, 16185, NUITKA_BYTECODE_FLAG },
    { "idna", MOD_INIT_NAME( idna ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "idna.core", MOD_INIT_NAME( idna$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.idnadata", MOD_INIT_NAME( idna$idnadata ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.intranges", MOD_INIT_NAME( idna$intranges ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.package_data", MOD_INIT_NAME( idna$package_data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.uts46data", MOD_INIT_NAME( idna$uts46data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "imp", NULL, 6586192, 9729, NUITKA_BYTECODE_FLAG },
    { "importlib", NULL, 6595921, 3633, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "importlib.machinery", NULL, 6599554, 983, NUITKA_BYTECODE_FLAG },
    { "inspect", NULL, 6600537, 79410, NUITKA_BYTECODE_FLAG },
    { "io", NULL, 6679947, 3420, NUITKA_BYTECODE_FLAG },
    { "ipaddress", NULL, 6683367, 62405, NUITKA_BYTECODE_FLAG },
    { "json", NULL, 6745772, 12674, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "kiwisolver", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "locale", NULL, 6758446, 34078, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 6792524, 60375, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lzma", NULL, 6852899, 12025, NUITKA_BYTECODE_FLAG },
    { "matplotlib", MOD_INIT_NAME( matplotlib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "matplotlib._cm", MOD_INIT_NAME( matplotlib$_cm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib._cm_listed", MOD_INIT_NAME( matplotlib$_cm_listed ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib._color_data", MOD_INIT_NAME( matplotlib$_color_data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib._constrained_layout", MOD_INIT_NAME( matplotlib$_constrained_layout ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib._contour", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "matplotlib._image", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "matplotlib._layoutbox", MOD_INIT_NAME( matplotlib$_layoutbox ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib._mathtext_data", MOD_INIT_NAME( matplotlib$_mathtext_data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib._path", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "matplotlib._png", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "matplotlib._pylab_helpers", MOD_INIT_NAME( matplotlib$_pylab_helpers ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib._qhull", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "matplotlib._tri", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "matplotlib._version", MOD_INIT_NAME( matplotlib$_version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.afm", MOD_INIT_NAME( matplotlib$afm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.artist", MOD_INIT_NAME( matplotlib$artist ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.axes", MOD_INIT_NAME( matplotlib$axes ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "matplotlib.axes._axes", MOD_INIT_NAME( matplotlib$axes$_axes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.axes._base", MOD_INIT_NAME( matplotlib$axes$_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.axes._secondary_axes", MOD_INIT_NAME( matplotlib$axes$_secondary_axes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.axes._subplots", MOD_INIT_NAME( matplotlib$axes$_subplots ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.axis", MOD_INIT_NAME( matplotlib$axis ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.backend_bases", MOD_INIT_NAME( matplotlib$backend_bases ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.backend_tools", MOD_INIT_NAME( matplotlib$backend_tools ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.backends", MOD_INIT_NAME( matplotlib$backends ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "matplotlib.backends._backend_agg", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "matplotlib.backends.backend_agg", MOD_INIT_NAME( matplotlib$backends$backend_agg ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.backends.backend_webagg", MOD_INIT_NAME( matplotlib$backends$backend_webagg ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.backends.backend_webagg_core", MOD_INIT_NAME( matplotlib$backends$backend_webagg_core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.bezier", MOD_INIT_NAME( matplotlib$bezier ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.blocking_input", MOD_INIT_NAME( matplotlib$blocking_input ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.category", MOD_INIT_NAME( matplotlib$category ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.cbook", MOD_INIT_NAME( matplotlib$cbook ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "matplotlib.cbook.deprecation", MOD_INIT_NAME( matplotlib$cbook$deprecation ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.cm", MOD_INIT_NAME( matplotlib$cm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.collections", MOD_INIT_NAME( matplotlib$collections ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.colorbar", MOD_INIT_NAME( matplotlib$colorbar ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.colors", MOD_INIT_NAME( matplotlib$colors ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.container", MOD_INIT_NAME( matplotlib$container ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.contour", MOD_INIT_NAME( matplotlib$contour ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.dates", MOD_INIT_NAME( matplotlib$dates ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.docstring", MOD_INIT_NAME( matplotlib$docstring ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.dviread", MOD_INIT_NAME( matplotlib$dviread ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.figure", MOD_INIT_NAME( matplotlib$figure ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.font_manager", MOD_INIT_NAME( matplotlib$font_manager ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.fontconfig_pattern", MOD_INIT_NAME( matplotlib$fontconfig_pattern ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.ft2font", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "matplotlib.gridspec", MOD_INIT_NAME( matplotlib$gridspec ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.hatch", MOD_INIT_NAME( matplotlib$hatch ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.image", MOD_INIT_NAME( matplotlib$image ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.legend", MOD_INIT_NAME( matplotlib$legend ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.legend_handler", MOD_INIT_NAME( matplotlib$legend_handler ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.lines", MOD_INIT_NAME( matplotlib$lines ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.markers", MOD_INIT_NAME( matplotlib$markers ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.mathtext", MOD_INIT_NAME( matplotlib$mathtext ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.mlab", MOD_INIT_NAME( matplotlib$mlab ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.offsetbox", MOD_INIT_NAME( matplotlib$offsetbox ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.patches", MOD_INIT_NAME( matplotlib$patches ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.path", MOD_INIT_NAME( matplotlib$path ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.patheffects", MOD_INIT_NAME( matplotlib$patheffects ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.projections", MOD_INIT_NAME( matplotlib$projections ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "matplotlib.projections.geo", MOD_INIT_NAME( matplotlib$projections$geo ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.projections.polar", MOD_INIT_NAME( matplotlib$projections$polar ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.pyplot", MOD_INIT_NAME( matplotlib$pyplot ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.quiver", MOD_INIT_NAME( matplotlib$quiver ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.rcsetup", MOD_INIT_NAME( matplotlib$rcsetup ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.scale", MOD_INIT_NAME( matplotlib$scale ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.spines", MOD_INIT_NAME( matplotlib$spines ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.stackplot", MOD_INIT_NAME( matplotlib$stackplot ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.streamplot", MOD_INIT_NAME( matplotlib$streamplot ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.style", MOD_INIT_NAME( matplotlib$style ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "matplotlib.style.core", MOD_INIT_NAME( matplotlib$style$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.table", MOD_INIT_NAME( matplotlib$table ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.texmanager", MOD_INIT_NAME( matplotlib$texmanager ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.text", MOD_INIT_NAME( matplotlib$text ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.textpath", MOD_INIT_NAME( matplotlib$textpath ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.ticker", MOD_INIT_NAME( matplotlib$ticker ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tight_bbox", MOD_INIT_NAME( matplotlib$tight_bbox ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tight_layout", MOD_INIT_NAME( matplotlib$tight_layout ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.transforms", MOD_INIT_NAME( matplotlib$transforms ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tri", MOD_INIT_NAME( matplotlib$tri ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "matplotlib.tri.triangulation", MOD_INIT_NAME( matplotlib$tri$triangulation ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tri.tricontour", MOD_INIT_NAME( matplotlib$tri$tricontour ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tri.trifinder", MOD_INIT_NAME( matplotlib$tri$trifinder ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tri.triinterpolate", MOD_INIT_NAME( matplotlib$tri$triinterpolate ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tri.tripcolor", MOD_INIT_NAME( matplotlib$tri$tripcolor ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tri.triplot", MOD_INIT_NAME( matplotlib$tri$triplot ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tri.trirefine", MOD_INIT_NAME( matplotlib$tri$trirefine ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.tri.tritools", MOD_INIT_NAME( matplotlib$tri$tritools ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.units", MOD_INIT_NAME( matplotlib$units ), 0, 0, NUITKA_COMPILED_MODULE },
    { "matplotlib.widgets", MOD_INIT_NAME( matplotlib$widgets ), 0, 0, NUITKA_COMPILED_MODULE },
    { "mimetypes", NULL, 6864924, 15576, NUITKA_BYTECODE_FLAG },
    { "model", MOD_INIT_NAME( model ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "model.aerodynamic_forces", MOD_INIT_NAME( model$aerodynamic_forces ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "model.aerodynamic_forces.aerodynamic_forces", MOD_INIT_NAME( model$aerodynamic_forces$aerodynamic_forces ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.aerodynamic_forces.atmosphere_model", MOD_INIT_NAME( model$aerodynamic_forces$atmosphere_model ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.aerodynamic_forces.drag_model_open_rocket", MOD_INIT_NAME( model$aerodynamic_forces$drag_model_open_rocket ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.aerodynamic_forces.stability_model_open_rocket", MOD_INIT_NAME( model$aerodynamic_forces$stability_model_open_rocket ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.constants", MOD_INIT_NAME( model$constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.entities", MOD_INIT_NAME( model$entities ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "model.entities.event_entities", MOD_INIT_NAME( model$entities$event_entities ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.entities.flight_data_entities", MOD_INIT_NAME( model$entities$flight_data_entities ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.entities.motor_data_entities", MOD_INIT_NAME( model$entities$motor_data_entities ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.entities.rocket_entities", MOD_INIT_NAME( model$entities$rocket_entities ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.file_io", MOD_INIT_NAME( model$file_io ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.filters", MOD_INIT_NAME( model$filters ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.flight_phase", MOD_INIT_NAME( model$flight_phase ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.gravity_model", MOD_INIT_NAME( model$gravity_model ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.serial_transfer", MOD_INIT_NAME( model$serial_transfer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.simulation_engine", MOD_INIT_NAME( model$simulation_engine ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.test_rocket", MOD_INIT_NAME( model$test_rocket ), 0, 0, NUITKA_COMPILED_MODULE },
    { "model.thrust_curve_data_retrieve", MOD_INIT_NAME( model$thrust_curve_data_retrieve ), 0, 0, NUITKA_COMPILED_MODULE },
    { "multiprocessing", NULL, 6880500, 538, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "netrc", NULL, 6881038, 3869, NUITKA_BYTECODE_FLAG },
    { "ntpath", NULL, 6884907, 13698, NUITKA_BYTECODE_FLAG },
    { "numbers", NULL, 6898605, 12175, NUITKA_BYTECODE_FLAG },
    { "numpy", MOD_INIT_NAME( numpy ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.__config__", MOD_INIT_NAME( numpy$__config__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy._distributor_init", MOD_INIT_NAME( numpy$_distributor_init ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy._globals", MOD_INIT_NAME( numpy$_globals ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy._pytesttester", MOD_INIT_NAME( numpy$_pytesttester ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.compat", MOD_INIT_NAME( numpy$compat ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.compat._inspect", MOD_INIT_NAME( numpy$compat$_inspect ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.compat.py3k", MOD_INIT_NAME( numpy$compat$py3k ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core", MOD_INIT_NAME( numpy$core ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.core._add_newdocs", MOD_INIT_NAME( numpy$core$_add_newdocs ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core._asarray", MOD_INIT_NAME( numpy$core$_asarray ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core._dtype", MOD_INIT_NAME( numpy$core$_dtype ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core._dtype_ctypes", MOD_INIT_NAME( numpy$core$_dtype_ctypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core._exceptions", MOD_INIT_NAME( numpy$core$_exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core._internal", MOD_INIT_NAME( numpy$core$_internal ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core._methods", MOD_INIT_NAME( numpy$core$_methods ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core._multiarray_umath", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.core._string_helpers", MOD_INIT_NAME( numpy$core$_string_helpers ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core._type_aliases", MOD_INIT_NAME( numpy$core$_type_aliases ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core._ufunc_config", MOD_INIT_NAME( numpy$core$_ufunc_config ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.arrayprint", MOD_INIT_NAME( numpy$core$arrayprint ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.defchararray", MOD_INIT_NAME( numpy$core$defchararray ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.einsumfunc", MOD_INIT_NAME( numpy$core$einsumfunc ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.fromnumeric", MOD_INIT_NAME( numpy$core$fromnumeric ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.function_base", MOD_INIT_NAME( numpy$core$function_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.getlimits", MOD_INIT_NAME( numpy$core$getlimits ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.info", MOD_INIT_NAME( numpy$core$info ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.machar", MOD_INIT_NAME( numpy$core$machar ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.memmap", MOD_INIT_NAME( numpy$core$memmap ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.multiarray", MOD_INIT_NAME( numpy$core$multiarray ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.numeric", MOD_INIT_NAME( numpy$core$numeric ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.numerictypes", MOD_INIT_NAME( numpy$core$numerictypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.overrides", MOD_INIT_NAME( numpy$core$overrides ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.records", MOD_INIT_NAME( numpy$core$records ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.shape_base", MOD_INIT_NAME( numpy$core$shape_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.core.umath", MOD_INIT_NAME( numpy$core$umath ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.ctypeslib", MOD_INIT_NAME( numpy$ctypeslib ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.distutils", NULL, 6910780, 1064, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "numpy.distutils.__config__", NULL, 6911844, 1372, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.__version__", NULL, 6913216, 377, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.ccompiler", NULL, 6913593, 19455, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.compat", NULL, 6933048, 512, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.cpuinfo", NULL, 6933560, 33719, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.exec_command", NULL, 6967279, 9437, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.info", NULL, 6976716, 368, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.log", NULL, 6977084, 2502, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.misc_util", NULL, 6979586, 67769, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.npy_pkg_config", NULL, 7047355, 12470, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.unixccompiler", NULL, 7059825, 3421, NUITKA_BYTECODE_FLAG },
    { "numpy.dual", MOD_INIT_NAME( numpy$dual ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.fft", MOD_INIT_NAME( numpy$fft ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.fft.helper", MOD_INIT_NAME( numpy$fft$helper ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.fft.info", MOD_INIT_NAME( numpy$fft$info ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.fft.pocketfft", MOD_INIT_NAME( numpy$fft$pocketfft ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.fft.pocketfft_internal", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.lib", MOD_INIT_NAME( numpy$lib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.lib._datasource", MOD_INIT_NAME( numpy$lib$_datasource ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib._iotools", MOD_INIT_NAME( numpy$lib$_iotools ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib._version", MOD_INIT_NAME( numpy$lib$_version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.arraypad", MOD_INIT_NAME( numpy$lib$arraypad ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.arraysetops", MOD_INIT_NAME( numpy$lib$arraysetops ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.arrayterator", MOD_INIT_NAME( numpy$lib$arrayterator ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.financial", MOD_INIT_NAME( numpy$lib$financial ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.format", MOD_INIT_NAME( numpy$lib$format ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.function_base", MOD_INIT_NAME( numpy$lib$function_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.histograms", MOD_INIT_NAME( numpy$lib$histograms ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.index_tricks", MOD_INIT_NAME( numpy$lib$index_tricks ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.info", MOD_INIT_NAME( numpy$lib$info ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.mixins", MOD_INIT_NAME( numpy$lib$mixins ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.nanfunctions", MOD_INIT_NAME( numpy$lib$nanfunctions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.npyio", MOD_INIT_NAME( numpy$lib$npyio ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.polynomial", MOD_INIT_NAME( numpy$lib$polynomial ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.scimath", MOD_INIT_NAME( numpy$lib$scimath ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.shape_base", MOD_INIT_NAME( numpy$lib$shape_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.stride_tricks", MOD_INIT_NAME( numpy$lib$stride_tricks ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.twodim_base", MOD_INIT_NAME( numpy$lib$twodim_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.type_check", MOD_INIT_NAME( numpy$lib$type_check ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.ufunclike", MOD_INIT_NAME( numpy$lib$ufunclike ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.lib.utils", MOD_INIT_NAME( numpy$lib$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.linalg", MOD_INIT_NAME( numpy$linalg ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.linalg._umath_linalg", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.linalg.info", MOD_INIT_NAME( numpy$linalg$info ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.linalg.lapack_lite", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.linalg.linalg", MOD_INIT_NAME( numpy$linalg$linalg ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.ma", MOD_INIT_NAME( numpy$ma ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.ma.core", MOD_INIT_NAME( numpy$ma$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.ma.extras", MOD_INIT_NAME( numpy$ma$extras ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.ma.mrecords", MOD_INIT_NAME( numpy$ma$mrecords ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.matrixlib", MOD_INIT_NAME( numpy$matrixlib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.matrixlib.defmatrix", MOD_INIT_NAME( numpy$matrixlib$defmatrix ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.polynomial", MOD_INIT_NAME( numpy$polynomial ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.polynomial._polybase", MOD_INIT_NAME( numpy$polynomial$_polybase ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.polynomial.chebyshev", MOD_INIT_NAME( numpy$polynomial$chebyshev ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.polynomial.hermite", MOD_INIT_NAME( numpy$polynomial$hermite ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.polynomial.hermite_e", MOD_INIT_NAME( numpy$polynomial$hermite_e ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.polynomial.laguerre", MOD_INIT_NAME( numpy$polynomial$laguerre ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.polynomial.legendre", MOD_INIT_NAME( numpy$polynomial$legendre ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.polynomial.polynomial", MOD_INIT_NAME( numpy$polynomial$polynomial ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.polynomial.polyutils", MOD_INIT_NAME( numpy$polynomial$polyutils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.random", MOD_INIT_NAME( numpy$random ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.random._pickle", MOD_INIT_NAME( numpy$random$_pickle ), 0, 0, NUITKA_COMPILED_MODULE },
    { "numpy.random.bit_generator", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.random.bounded_integers", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.random.common", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.random.entropy", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.random.generator", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.random.mt19937", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.random.mtrand", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.random.pcg64", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.random.philox", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.random.sfc64", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "numpy.testing", NULL, 7063246, 841, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "numpy.testing._private", NULL, 7064087, 183, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "numpy.testing._private.decorators", NULL, 7064270, 9168, NUITKA_BYTECODE_FLAG },
    { "numpy.testing._private.nosetester", NULL, 7073438, 15420, NUITKA_BYTECODE_FLAG },
    { "numpy.testing._private.utils", NULL, 7088858, 65892, NUITKA_BYTECODE_FLAG },
    { "numpy.version", MOD_INIT_NAME( numpy$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "operator", NULL, 7154750, 13946, NUITKA_BYTECODE_FLAG },
    { "os", NULL, 7168696, 29661, NUITKA_BYTECODE_FLAG },
    { "pathlib", NULL, 7198357, 41915, NUITKA_BYTECODE_FLAG },
    { "pdb", NULL, 7240272, 46127, NUITKA_BYTECODE_FLAG },
    { "pickle", NULL, 7286399, 42724, NUITKA_BYTECODE_FLAG },
    { "pipes", NULL, 7329123, 7841, NUITKA_BYTECODE_FLAG },
    { "pkgutil", NULL, 7336964, 16294, NUITKA_BYTECODE_FLAG },
    { "platform", NULL, 7353258, 28017, NUITKA_BYTECODE_FLAG },
    { "posixpath", NULL, 7381275, 10422, NUITKA_BYTECODE_FLAG },
    { "pprint", NULL, 7391697, 15857, NUITKA_BYTECODE_FLAG },
    { "pydoc", NULL, 7407554, 84267, NUITKA_BYTECODE_FLAG },
    { "pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "pyparsing", MOD_INIT_NAME( pyparsing ), 0, 0, NUITKA_COMPILED_MODULE },
    { "random", NULL, 7491821, 19330, NUITKA_BYTECODE_FLAG },
    { "re", NULL, 7511151, 14091, NUITKA_BYTECODE_FLAG },
    { "requests", MOD_INIT_NAME( requests ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "requests.__version__", MOD_INIT_NAME( requests$__version__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests._internal_utils", MOD_INIT_NAME( requests$_internal_utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.adapters", MOD_INIT_NAME( requests$adapters ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.api", MOD_INIT_NAME( requests$api ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.auth", MOD_INIT_NAME( requests$auth ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.certs", MOD_INIT_NAME( requests$certs ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.compat", MOD_INIT_NAME( requests$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.cookies", MOD_INIT_NAME( requests$cookies ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.exceptions", MOD_INIT_NAME( requests$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.hooks", MOD_INIT_NAME( requests$hooks ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.models", MOD_INIT_NAME( requests$models ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.packages", MOD_INIT_NAME( requests$packages ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.sessions", MOD_INIT_NAME( requests$sessions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.status_codes", MOD_INIT_NAME( requests$status_codes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.structures", MOD_INIT_NAME( requests$structures ), 0, 0, NUITKA_COMPILED_MODULE },
    { "requests.utils", MOD_INIT_NAME( requests$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy", MOD_INIT_NAME( scipy ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.__config__", MOD_INIT_NAME( scipy$__config__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy._distributor_init", MOD_INIT_NAME( scipy$_distributor_init ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy._lib", MOD_INIT_NAME( scipy$_lib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy._lib._ccallback", MOD_INIT_NAME( scipy$_lib$_ccallback ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy._lib._ccallback_c", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy._lib._numpy_compat", MOD_INIT_NAME( scipy$_lib$_numpy_compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy._lib._testutils", MOD_INIT_NAME( scipy$_lib$_testutils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy._lib._threadsafety", MOD_INIT_NAME( scipy$_lib$_threadsafety ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy._lib._util", MOD_INIT_NAME( scipy$_lib$_util ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy._lib._version", MOD_INIT_NAME( scipy$_lib$_version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy._lib.decorator", MOD_INIT_NAME( scipy$_lib$decorator ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy._lib.messagestream", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy._lib.six", MOD_INIT_NAME( scipy$_lib$six ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate", MOD_INIT_NAME( scipy$integrate ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.integrate._bvp", MOD_INIT_NAME( scipy$integrate$_bvp ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate._dop", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.integrate._ivp", MOD_INIT_NAME( scipy$integrate$_ivp ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.integrate._ivp.base", MOD_INIT_NAME( scipy$integrate$_ivp$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate._ivp.bdf", MOD_INIT_NAME( scipy$integrate$_ivp$bdf ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate._ivp.common", MOD_INIT_NAME( scipy$integrate$_ivp$common ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate._ivp.ivp", MOD_INIT_NAME( scipy$integrate$_ivp$ivp ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate._ivp.lsoda", MOD_INIT_NAME( scipy$integrate$_ivp$lsoda ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate._ivp.radau", MOD_INIT_NAME( scipy$integrate$_ivp$radau ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate._ivp.rk", MOD_INIT_NAME( scipy$integrate$_ivp$rk ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate._ode", MOD_INIT_NAME( scipy$integrate$_ode ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate._odepack", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.integrate._quadpack", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.integrate.lsoda", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.integrate.odepack", MOD_INIT_NAME( scipy$integrate$odepack ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate.quadpack", MOD_INIT_NAME( scipy$integrate$quadpack ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate.quadrature", MOD_INIT_NAME( scipy$integrate$quadrature ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.integrate.vode", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.interpolate", MOD_INIT_NAME( scipy$interpolate ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.interpolate._bspl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.interpolate._bsplines", MOD_INIT_NAME( scipy$interpolate$_bsplines ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.interpolate._cubic", MOD_INIT_NAME( scipy$interpolate$_cubic ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.interpolate._fitpack", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.interpolate._fitpack_impl", MOD_INIT_NAME( scipy$interpolate$_fitpack_impl ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.interpolate._pade", MOD_INIT_NAME( scipy$interpolate$_pade ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.interpolate._ppoly", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.interpolate.dfitpack", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.interpolate.fitpack", MOD_INIT_NAME( scipy$interpolate$fitpack ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.interpolate.fitpack2", MOD_INIT_NAME( scipy$interpolate$fitpack2 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.interpolate.interpnd", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.interpolate.interpolate", MOD_INIT_NAME( scipy$interpolate$interpolate ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.interpolate.ndgriddata", MOD_INIT_NAME( scipy$interpolate$ndgriddata ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.interpolate.polyint", MOD_INIT_NAME( scipy$interpolate$polyint ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.interpolate.rbf", MOD_INIT_NAME( scipy$interpolate$rbf ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg", MOD_INIT_NAME( scipy$linalg ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.linalg._decomp_ldl", MOD_INIT_NAME( scipy$linalg$_decomp_ldl ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg._decomp_polar", MOD_INIT_NAME( scipy$linalg$_decomp_polar ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg._decomp_qz", MOD_INIT_NAME( scipy$linalg$_decomp_qz ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg._decomp_update", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.linalg._expm_frechet", MOD_INIT_NAME( scipy$linalg$_expm_frechet ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg._fblas", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.linalg._flapack", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.linalg._flinalg", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.linalg._matfuncs_inv_ssq", MOD_INIT_NAME( scipy$linalg$_matfuncs_inv_ssq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg._matfuncs_sqrtm", MOD_INIT_NAME( scipy$linalg$_matfuncs_sqrtm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg._procrustes", MOD_INIT_NAME( scipy$linalg$_procrustes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg._sketches", MOD_INIT_NAME( scipy$linalg$_sketches ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg._solve_toeplitz", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.linalg._solvers", MOD_INIT_NAME( scipy$linalg$_solvers ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.basic", MOD_INIT_NAME( scipy$linalg$basic ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.blas", MOD_INIT_NAME( scipy$linalg$blas ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.cython_blas", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.linalg.cython_lapack", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.linalg.decomp", MOD_INIT_NAME( scipy$linalg$decomp ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.decomp_cholesky", MOD_INIT_NAME( scipy$linalg$decomp_cholesky ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.decomp_lu", MOD_INIT_NAME( scipy$linalg$decomp_lu ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.decomp_qr", MOD_INIT_NAME( scipy$linalg$decomp_qr ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.decomp_schur", MOD_INIT_NAME( scipy$linalg$decomp_schur ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.decomp_svd", MOD_INIT_NAME( scipy$linalg$decomp_svd ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.flinalg", MOD_INIT_NAME( scipy$linalg$flinalg ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.lapack", MOD_INIT_NAME( scipy$linalg$lapack ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.linalg_version", MOD_INIT_NAME( scipy$linalg$linalg_version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.matfuncs", MOD_INIT_NAME( scipy$linalg$matfuncs ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.misc", MOD_INIT_NAME( scipy$linalg$misc ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.linalg.special_matrices", MOD_INIT_NAME( scipy$linalg$special_matrices ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize", MOD_INIT_NAME( scipy$optimize ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.optimize._basinhopping", MOD_INIT_NAME( scipy$optimize$_basinhopping ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._bglu_dense", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize._cobyla", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize._constraints", MOD_INIT_NAME( scipy$optimize$_constraints ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._differentiable_functions", MOD_INIT_NAME( scipy$optimize$_differentiable_functions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._differentialevolution", MOD_INIT_NAME( scipy$optimize$_differentialevolution ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._dual_annealing", MOD_INIT_NAME( scipy$optimize$_dual_annealing ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._group_columns", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize._hessian_update_strategy", MOD_INIT_NAME( scipy$optimize$_hessian_update_strategy ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._hungarian", MOD_INIT_NAME( scipy$optimize$_hungarian ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._lbfgsb", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize._linprog", MOD_INIT_NAME( scipy$optimize$_linprog ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._linprog_ip", MOD_INIT_NAME( scipy$optimize$_linprog_ip ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._linprog_rs", MOD_INIT_NAME( scipy$optimize$_linprog_rs ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._linprog_simplex", MOD_INIT_NAME( scipy$optimize$_linprog_simplex ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._linprog_util", MOD_INIT_NAME( scipy$optimize$_linprog_util ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._lsq", MOD_INIT_NAME( scipy$optimize$_lsq ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.optimize._lsq.bvls", MOD_INIT_NAME( scipy$optimize$_lsq$bvls ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._lsq.common", MOD_INIT_NAME( scipy$optimize$_lsq$common ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._lsq.dogbox", MOD_INIT_NAME( scipy$optimize$_lsq$dogbox ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._lsq.givens_elimination", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize._lsq.least_squares", MOD_INIT_NAME( scipy$optimize$_lsq$least_squares ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._lsq.lsq_linear", MOD_INIT_NAME( scipy$optimize$_lsq$lsq_linear ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._lsq.trf", MOD_INIT_NAME( scipy$optimize$_lsq$trf ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._lsq.trf_linear", MOD_INIT_NAME( scipy$optimize$_lsq$trf_linear ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._minimize", MOD_INIT_NAME( scipy$optimize$_minimize ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._minpack", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize._nnls", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize._numdiff", MOD_INIT_NAME( scipy$optimize$_numdiff ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._remove_redundancy", MOD_INIT_NAME( scipy$optimize$_remove_redundancy ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._root", MOD_INIT_NAME( scipy$optimize$_root ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._root_scalar", MOD_INIT_NAME( scipy$optimize$_root_scalar ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._shgo", MOD_INIT_NAME( scipy$optimize$_shgo ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._shgo_lib", MOD_INIT_NAME( scipy$optimize$_shgo_lib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.optimize._shgo_lib.sobol_seq", MOD_INIT_NAME( scipy$optimize$_shgo_lib$sobol_seq ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._shgo_lib.triangulation", MOD_INIT_NAME( scipy$optimize$_shgo_lib$triangulation ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._slsqp", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize._spectral", MOD_INIT_NAME( scipy$optimize$_spectral ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trlib", MOD_INIT_NAME( scipy$optimize$_trlib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.optimize._trlib._trlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize._trustregion", MOD_INIT_NAME( scipy$optimize$_trustregion ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_constr", MOD_INIT_NAME( scipy$optimize$_trustregion_constr ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.optimize._trustregion_constr.canonical_constraint", MOD_INIT_NAME( scipy$optimize$_trustregion_constr$canonical_constraint ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_constr.equality_constrained_sqp", MOD_INIT_NAME( scipy$optimize$_trustregion_constr$equality_constrained_sqp ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_constr.minimize_trustregion_constr", MOD_INIT_NAME( scipy$optimize$_trustregion_constr$minimize_trustregion_constr ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_constr.projections", MOD_INIT_NAME( scipy$optimize$_trustregion_constr$projections ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_constr.qp_subproblem", MOD_INIT_NAME( scipy$optimize$_trustregion_constr$qp_subproblem ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_constr.report", MOD_INIT_NAME( scipy$optimize$_trustregion_constr$report ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_constr.tr_interior_point", MOD_INIT_NAME( scipy$optimize$_trustregion_constr$tr_interior_point ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_dogleg", MOD_INIT_NAME( scipy$optimize$_trustregion_dogleg ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_exact", MOD_INIT_NAME( scipy$optimize$_trustregion_exact ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_krylov", MOD_INIT_NAME( scipy$optimize$_trustregion_krylov ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._trustregion_ncg", MOD_INIT_NAME( scipy$optimize$_trustregion_ncg ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize._zeros", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize.cobyla", MOD_INIT_NAME( scipy$optimize$cobyla ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize.lbfgsb", MOD_INIT_NAME( scipy$optimize$lbfgsb ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize.linesearch", MOD_INIT_NAME( scipy$optimize$linesearch ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize.minpack", MOD_INIT_NAME( scipy$optimize$minpack ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize.minpack2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize.moduleTNC", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.optimize.nnls", MOD_INIT_NAME( scipy$optimize$nnls ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize.nonlin", MOD_INIT_NAME( scipy$optimize$nonlin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize.optimize", MOD_INIT_NAME( scipy$optimize$optimize ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize.slsqp", MOD_INIT_NAME( scipy$optimize$slsqp ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize.tnc", MOD_INIT_NAME( scipy$optimize$tnc ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.optimize.zeros", MOD_INIT_NAME( scipy$optimize$zeros ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse", MOD_INIT_NAME( scipy$sparse ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.sparse._csparsetools", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse._index", MOD_INIT_NAME( scipy$sparse$_index ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse._matrix_io", MOD_INIT_NAME( scipy$sparse$_matrix_io ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse._sparsetools", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse.base", MOD_INIT_NAME( scipy$sparse$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.bsr", MOD_INIT_NAME( scipy$sparse$bsr ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.compressed", MOD_INIT_NAME( scipy$sparse$compressed ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.construct", MOD_INIT_NAME( scipy$sparse$construct ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.coo", MOD_INIT_NAME( scipy$sparse$coo ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.csc", MOD_INIT_NAME( scipy$sparse$csc ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.csgraph", MOD_INIT_NAME( scipy$sparse$csgraph ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.sparse.csgraph._laplacian", MOD_INIT_NAME( scipy$sparse$csgraph$_laplacian ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.csgraph._min_spanning_tree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse.csgraph._reordering", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse.csgraph._shortest_path", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse.csgraph._tools", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse.csgraph._traversal", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse.csgraph._validation", MOD_INIT_NAME( scipy$sparse$csgraph$_validation ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.csr", MOD_INIT_NAME( scipy$sparse$csr ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.data", MOD_INIT_NAME( scipy$sparse$data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.dia", MOD_INIT_NAME( scipy$sparse$dia ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.dok", MOD_INIT_NAME( scipy$sparse$dok ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.extract", MOD_INIT_NAME( scipy$sparse$extract ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.lil", MOD_INIT_NAME( scipy$sparse$lil ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg", MOD_INIT_NAME( scipy$sparse$linalg ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.sparse.linalg._expm_multiply", MOD_INIT_NAME( scipy$sparse$linalg$_expm_multiply ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg._norm", MOD_INIT_NAME( scipy$sparse$linalg$_norm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg._onenormest", MOD_INIT_NAME( scipy$sparse$linalg$_onenormest ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.dsolve", MOD_INIT_NAME( scipy$sparse$linalg$dsolve ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.sparse.linalg.dsolve._add_newdocs", MOD_INIT_NAME( scipy$sparse$linalg$dsolve$_add_newdocs ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.dsolve._superlu", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse.linalg.dsolve.linsolve", MOD_INIT_NAME( scipy$sparse$linalg$dsolve$linsolve ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.eigen", MOD_INIT_NAME( scipy$sparse$linalg$eigen ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.sparse.linalg.eigen.arpack", MOD_INIT_NAME( scipy$sparse$linalg$eigen$arpack ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.sparse.linalg.eigen.arpack._arpack", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse.linalg.eigen.arpack.arpack", MOD_INIT_NAME( scipy$sparse$linalg$eigen$arpack$arpack ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.eigen.lobpcg", MOD_INIT_NAME( scipy$sparse$linalg$eigen$lobpcg ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.sparse.linalg.eigen.lobpcg.lobpcg", MOD_INIT_NAME( scipy$sparse$linalg$eigen$lobpcg$lobpcg ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.interface", MOD_INIT_NAME( scipy$sparse$linalg$interface ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.isolve", MOD_INIT_NAME( scipy$sparse$linalg$isolve ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.sparse.linalg.isolve._gcrotmk", MOD_INIT_NAME( scipy$sparse$linalg$isolve$_gcrotmk ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.isolve._iterative", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.sparse.linalg.isolve.iterative", MOD_INIT_NAME( scipy$sparse$linalg$isolve$iterative ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.isolve.lgmres", MOD_INIT_NAME( scipy$sparse$linalg$isolve$lgmres ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.isolve.lsmr", MOD_INIT_NAME( scipy$sparse$linalg$isolve$lsmr ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.isolve.lsqr", MOD_INIT_NAME( scipy$sparse$linalg$isolve$lsqr ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.isolve.minres", MOD_INIT_NAME( scipy$sparse$linalg$isolve$minres ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.isolve.utils", MOD_INIT_NAME( scipy$sparse$linalg$isolve$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.linalg.matfuncs", MOD_INIT_NAME( scipy$sparse$linalg$matfuncs ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.spfuncs", MOD_INIT_NAME( scipy$sparse$spfuncs ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.sparse.sputils", MOD_INIT_NAME( scipy$sparse$sputils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.spatial", MOD_INIT_NAME( scipy$spatial ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.spatial._distance_wrap", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.spatial._hausdorff", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.spatial._plotutils", MOD_INIT_NAME( scipy$spatial$_plotutils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.spatial._procrustes", MOD_INIT_NAME( scipy$spatial$_procrustes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.spatial._spherical_voronoi", MOD_INIT_NAME( scipy$spatial$_spherical_voronoi ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.spatial._voronoi", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.spatial.ckdtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.spatial.distance", MOD_INIT_NAME( scipy$spatial$distance ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.spatial.kdtree", MOD_INIT_NAME( scipy$spatial$kdtree ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.spatial.qhull", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.spatial.transform", MOD_INIT_NAME( scipy$spatial$transform ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.spatial.transform._rotation_spline", MOD_INIT_NAME( scipy$spatial$transform$_rotation_spline ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.spatial.transform.rotation", MOD_INIT_NAME( scipy$spatial$transform$rotation ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.special", MOD_INIT_NAME( scipy$special ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.special._comb", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.special._ellip_harm", MOD_INIT_NAME( scipy$special$_ellip_harm ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.special._ellip_harm_2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.special._logsumexp", MOD_INIT_NAME( scipy$special$_logsumexp ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.special._spherical_bessel", MOD_INIT_NAME( scipy$special$_spherical_bessel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.special._ufuncs", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.special._ufuncs_cxx", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.special.basic", MOD_INIT_NAME( scipy$special$basic ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.special.lambertw", MOD_INIT_NAME( scipy$special$lambertw ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.special.orthogonal", MOD_INIT_NAME( scipy$special$orthogonal ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.special.sf_error", MOD_INIT_NAME( scipy$special$sf_error ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.special.specfun", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "scipy.special.spfun_stats", MOD_INIT_NAME( scipy$special$spfun_stats ), 0, 0, NUITKA_COMPILED_MODULE },
    { "scipy.version", MOD_INIT_NAME( scipy$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "serial", MOD_INIT_NAME( serial ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "serial.serialcli", MOD_INIT_NAME( serial$serialcli ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.serialjava", MOD_INIT_NAME( serial$serialjava ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.serialposix", MOD_INIT_NAME( serial$serialposix ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.serialutil", MOD_INIT_NAME( serial$serialutil ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.serialwin32", MOD_INIT_NAME( serial$serialwin32 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.tools", MOD_INIT_NAME( serial$tools ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "serial.tools.list_ports", MOD_INIT_NAME( serial$tools$list_ports ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.tools.list_ports_common", MOD_INIT_NAME( serial$tools$list_ports_common ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.tools.list_ports_linux", MOD_INIT_NAME( serial$tools$list_ports_linux ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.tools.list_ports_osx", MOD_INIT_NAME( serial$tools$list_ports_osx ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.tools.list_ports_posix", MOD_INIT_NAME( serial$tools$list_ports_posix ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.tools.list_ports_windows", MOD_INIT_NAME( serial$tools$list_ports_windows ), 0, 0, NUITKA_COMPILED_MODULE },
    { "serial.win32", MOD_INIT_NAME( serial$win32 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "shlex", NULL, 7525242, 7003, NUITKA_BYTECODE_FLAG },
    { "shutil", NULL, 7532245, 30418, NUITKA_BYTECODE_FLAG },
    { "signal", NULL, 7562663, 2548, NUITKA_BYTECODE_FLAG },
    { "site", NULL, 7565211, 12467, NUITKA_BYTECODE_FLAG },
    { "six", MOD_INIT_NAME( six ), 0, 0, NUITKA_COMPILED_MODULE },
    { "socket", NULL, 7577678, 22046, NUITKA_BYTECODE_FLAG },
    { "sre_constants", NULL, 7599724, 6005, NUITKA_BYTECODE_FLAG },
    { "ssl", NULL, 7605729, 36168, NUITKA_BYTECODE_FLAG },
    { "string", NULL, 7641897, 7997, NUITKA_BYTECODE_FLAG },
    { "struct", NULL, 7649894, 345, NUITKA_BYTECODE_FLAG },
    { "subprocess", NULL, 7650239, 35189, NUITKA_BYTECODE_FLAG },
    { "tarfile", NULL, 7685428, 62624, NUITKA_BYTECODE_FLAG },
    { "tempfile", NULL, 7748052, 22260, NUITKA_BYTECODE_FLAG },
    { "textwrap", NULL, 7770312, 13717, NUITKA_BYTECODE_FLAG },
    { "threading", NULL, 7784029, 37267, NUITKA_BYTECODE_FLAG },
    { "tokenize", NULL, 7821296, 18576, NUITKA_BYTECODE_FLAG },
    { "traceback", NULL, 7839872, 19569, NUITKA_BYTECODE_FLAG },
    { "types", NULL, 7859441, 8234, NUITKA_BYTECODE_FLAG },
    { "unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "unittest", NULL, 7867675, 3022, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "unittest.case", NULL, 7870697, 47670, NUITKA_BYTECODE_FLAG },
    { "urllib", NULL, 7918367, 153, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "urllib.error", NULL, 7918520, 2787, NUITKA_BYTECODE_FLAG },
    { "urllib.parse", NULL, 7921307, 29501, NUITKA_BYTECODE_FLAG },
    { "urllib.request", NULL, 7950808, 72647, NUITKA_BYTECODE_FLAG },
    { "urllib3", MOD_INIT_NAME( urllib3 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3._collections", MOD_INIT_NAME( urllib3$_collections ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.connection", MOD_INIT_NAME( urllib3$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.connectionpool", MOD_INIT_NAME( urllib3$connectionpool ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.contrib", MOD_INIT_NAME( urllib3$contrib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.contrib._appengine_environ", MOD_INIT_NAME( urllib3$contrib$_appengine_environ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.contrib.pyopenssl", MOD_INIT_NAME( urllib3$contrib$pyopenssl ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.contrib.socks", MOD_INIT_NAME( urllib3$contrib$socks ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.exceptions", MOD_INIT_NAME( urllib3$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.fields", MOD_INIT_NAME( urllib3$fields ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.filepost", MOD_INIT_NAME( urllib3$filepost ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages", MOD_INIT_NAME( urllib3$packages ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.backports", MOD_INIT_NAME( urllib3$packages$backports ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.backports.makefile", MOD_INIT_NAME( urllib3$packages$backports$makefile ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986", MOD_INIT_NAME( urllib3$packages$rfc3986 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.rfc3986._mixin", MOD_INIT_NAME( urllib3$packages$rfc3986$_mixin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.abnf_regexp", MOD_INIT_NAME( urllib3$packages$rfc3986$abnf_regexp ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.api", MOD_INIT_NAME( urllib3$packages$rfc3986$api ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.compat", MOD_INIT_NAME( urllib3$packages$rfc3986$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.exceptions", MOD_INIT_NAME( urllib3$packages$rfc3986$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.iri", MOD_INIT_NAME( urllib3$packages$rfc3986$iri ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.misc", MOD_INIT_NAME( urllib3$packages$rfc3986$misc ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.normalizers", MOD_INIT_NAME( urllib3$packages$rfc3986$normalizers ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.parseresult", MOD_INIT_NAME( urllib3$packages$rfc3986$parseresult ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.uri", MOD_INIT_NAME( urllib3$packages$rfc3986$uri ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.rfc3986.validators", MOD_INIT_NAME( urllib3$packages$rfc3986$validators ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.six", MOD_INIT_NAME( urllib3$packages$six ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.packages.ssl_match_hostname", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.ssl_match_hostname._implementation", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname$_implementation ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.poolmanager", MOD_INIT_NAME( urllib3$poolmanager ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.request", MOD_INIT_NAME( urllib3$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.response", MOD_INIT_NAME( urllib3$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util", MOD_INIT_NAME( urllib3$util ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.util.connection", MOD_INIT_NAME( urllib3$util$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.queue", MOD_INIT_NAME( urllib3$util$queue ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.request", MOD_INIT_NAME( urllib3$util$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.response", MOD_INIT_NAME( urllib3$util$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.retry", MOD_INIT_NAME( urllib3$util$retry ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.ssl_", MOD_INIT_NAME( urllib3$util$ssl_ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.timeout", MOD_INIT_NAME( urllib3$util$timeout ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.url", MOD_INIT_NAME( urllib3$util$url ), 0, 0, NUITKA_COMPILED_MODULE },
    { "urllib3.util.wait", MOD_INIT_NAME( urllib3$util$wait ), 0, 0, NUITKA_COMPILED_MODULE },
    { "uuid", NULL, 8023455, 20951, NUITKA_BYTECODE_FLAG },
    { "warnings", NULL, 8044406, 13291, NUITKA_BYTECODE_FLAG },
    { "weakref", NULL, 8057697, 19176, NUITKA_BYTECODE_FLAG },
    { "webbrowser", NULL, 8076873, 15881, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 8092754, 717, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom", NULL, 8093471, 5464, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom.expatbuilder", NULL, 8098935, 27177, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minidom", NULL, 8126112, 55879, NUITKA_BYTECODE_FLAG },
    { "xml.dom.pulldom", NULL, 8181991, 10568, NUITKA_BYTECODE_FLAG },
    { "xml.etree", NULL, 8192559, 156, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.etree.ElementTree", NULL, 8192715, 44761, NUITKA_BYTECODE_FLAG },
    { "xml.etree.cElementTree", NULL, 8237476, 198, NUITKA_BYTECODE_FLAG },
    { "xml.parsers", NULL, 8237674, 330, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 8238004, 359, NUITKA_BYTECODE_FLAG },
    { "xml.sax", NULL, 8238363, 3154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.sax.expatreader", NULL, 8241517, 12431, NUITKA_BYTECODE_FLAG },
    { "xmlrpc", NULL, 8253948, 153, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xmlrpc.client", NULL, 8254101, 34696, NUITKA_BYTECODE_FLAG },
    { "zipfile", NULL, 8288797, 48237, NUITKA_BYTECODE_FLAG },
    { "__future__", NULL, 8337034, 4200, NUITKA_BYTECODE_FLAG },
    { "_bootlocale", NULL, 8341234, 1013, NUITKA_BYTECODE_FLAG },
    { "_compat_pickle", NULL, 8342247, 6599, NUITKA_BYTECODE_FLAG },
    { "_dummy_thread", NULL, 8348846, 4884, NUITKA_BYTECODE_FLAG },
    { "_markupbase", NULL, 8353730, 8024, NUITKA_BYTECODE_FLAG },
    { "_osx_support", NULL, 8361754, 9717, NUITKA_BYTECODE_FLAG },
    { "_pyio", NULL, 8371471, 71397, NUITKA_BYTECODE_FLAG },
    { "_sitebuiltins", NULL, 8442868, 3468, NUITKA_BYTECODE_FLAG },
    { "_strptime", NULL, 8446336, 15996, NUITKA_BYTECODE_FLAG },
    { "_threading_local", NULL, 8462332, 6458, NUITKA_BYTECODE_FLAG },
    { "aifc", NULL, 8468790, 25976, NUITKA_BYTECODE_FLAG },
    { "argparse", NULL, 5984152, 60223, NUITKA_BYTECODE_FLAG },
    { "asynchat", NULL, 8494766, 6848, NUITKA_BYTECODE_FLAG },
    { "asyncio", NULL, 8501614, 811, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "asyncio.base_events", NULL, 8502425, 38924, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_futures", NULL, 8541349, 2080, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_subprocess", NULL, 8543429, 9295, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_tasks", NULL, 8552724, 1894, NUITKA_BYTECODE_FLAG },
    { "asyncio.compat", NULL, 8554618, 765, NUITKA_BYTECODE_FLAG },
    { "asyncio.constants", NULL, 8555383, 284, NUITKA_BYTECODE_FLAG },
    { "asyncio.coroutines", NULL, 8555667, 8585, NUITKA_BYTECODE_FLAG },
    { "asyncio.events", NULL, 8564252, 25371, NUITKA_BYTECODE_FLAG },
    { "asyncio.futures", NULL, 8589623, 13780, NUITKA_BYTECODE_FLAG },
    { "asyncio.locks", NULL, 8603403, 15481, NUITKA_BYTECODE_FLAG },
    { "asyncio.log", NULL, 8618884, 251, NUITKA_BYTECODE_FLAG },
    { "asyncio.proactor_events", NULL, 8619135, 16714, NUITKA_BYTECODE_FLAG },
    { "asyncio.protocols", NULL, 8635849, 6010, NUITKA_BYTECODE_FLAG },
    { "asyncio.queues", NULL, 8641859, 8437, NUITKA_BYTECODE_FLAG },
    { "asyncio.selector_events", NULL, 8650296, 30050, NUITKA_BYTECODE_FLAG },
    { "asyncio.sslproto", NULL, 8680346, 20376, NUITKA_BYTECODE_FLAG },
    { "asyncio.streams", NULL, 8700722, 19948, NUITKA_BYTECODE_FLAG },
    { "asyncio.subprocess", NULL, 8720670, 6857, NUITKA_BYTECODE_FLAG },
    { "asyncio.tasks", NULL, 8727527, 19126, NUITKA_BYTECODE_FLAG },
    { "asyncio.transports", NULL, 8746653, 12093, NUITKA_BYTECODE_FLAG },
    { "asyncio.windows_events", NULL, 8758746, 21527, NUITKA_BYTECODE_FLAG },
    { "asyncio.windows_utils", NULL, 8780273, 5415, NUITKA_BYTECODE_FLAG },
    { "asyncore", NULL, 8785688, 15871, NUITKA_BYTECODE_FLAG },
    { "bdb", NULL, 8801559, 17066, NUITKA_BYTECODE_FLAG },
    { "binhex", NULL, 8818625, 12119, NUITKA_BYTECODE_FLAG },
    { "bisect", NULL, 6073280, 2709, NUITKA_BYTECODE_FLAG },
    { "cProfile", NULL, 8830744, 4244, NUITKA_BYTECODE_FLAG },
    { "calendar", NULL, 6087304, 25915, NUITKA_BYTECODE_FLAG },
    { "cgi", NULL, 8834988, 27847, NUITKA_BYTECODE_FLAG },
    { "cgitb", NULL, 8862835, 10113, NUITKA_BYTECODE_FLAG },
    { "chunk", NULL, 8872948, 4933, NUITKA_BYTECODE_FLAG },
    { "cmd", NULL, 8877881, 12608, NUITKA_BYTECODE_FLAG },
    { "code", NULL, 8890489, 9869, NUITKA_BYTECODE_FLAG },
    { "codeop", NULL, 8900358, 6303, NUITKA_BYTECODE_FLAG },
    { "colorsys", NULL, 6193001, 3344, NUITKA_BYTECODE_FLAG },
    { "compileall", NULL, 8906661, 8291, NUITKA_BYTECODE_FLAG },
    { "concurrent", NULL, 8914952, 157, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures", NULL, 8915109, 673, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures._base", NULL, 8915782, 20644, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.process", NULL, 8936426, 15862, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.thread", NULL, 8952288, 3945, NUITKA_BYTECODE_FLAG },
    { "configparser", NULL, 6196345, 45259, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 6241604, 11191, NUITKA_BYTECODE_FLAG },
    { "copy", NULL, 6252795, 7112, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 6264184, 11888, NUITKA_BYTECODE_FLAG },
    { "ctypes", NULL, 6276072, 16093, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes._endian", NULL, 8956233, 1957, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib", NULL, 8958190, 324, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes.macholib.dyld", NULL, 8958514, 4364, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.dylib", NULL, 8962878, 1951, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.framework", NULL, 8964829, 2231, NUITKA_BYTECODE_FLAG },
    { "ctypes.util", NULL, 6292165, 7259, NUITKA_BYTECODE_FLAG },
    { "ctypes.wintypes", NULL, 6299424, 5128, NUITKA_BYTECODE_FLAG },
    { "datetime", NULL, 6304552, 53771, NUITKA_BYTECODE_FLAG },
    { "dbm", NULL, 8967060, 4202, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "dbm.dumb", NULL, 8971262, 8246, NUITKA_BYTECODE_FLAG },
    { "decimal", NULL, 8979508, 163435, NUITKA_BYTECODE_FLAG },
    { "difflib", NULL, 9142943, 59675, NUITKA_BYTECODE_FLAG },
    { "distutils", NULL, 6358323, 409, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils._msvccompiler", NULL, 9202618, 13564, NUITKA_BYTECODE_FLAG },
    { "distutils.archive_util", NULL, 9216182, 6404, NUITKA_BYTECODE_FLAG },
    { "distutils.bcppcompiler", NULL, 9222586, 6512, NUITKA_BYTECODE_FLAG },
    { "distutils.ccompiler", NULL, 6358732, 33378, NUITKA_BYTECODE_FLAG },
    { "distutils.cmd", NULL, 9229098, 15019, NUITKA_BYTECODE_FLAG },
    { "distutils.command", NULL, 9244117, 566, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.command.bdist", NULL, 9244683, 3812, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_dumb", NULL, 9248495, 3773, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_msi", NULL, 9252268, 19796, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_rpm", NULL, 9272064, 13100, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_wininst", NULL, 9285164, 8359, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build", NULL, 9293523, 4096, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_clib", NULL, 9297619, 5002, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_ext", NULL, 9302621, 16588, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_py", NULL, 9319209, 10549, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_scripts", NULL, 9329758, 4365, NUITKA_BYTECODE_FLAG },
    { "distutils.command.check", NULL, 9334123, 5256, NUITKA_BYTECODE_FLAG },
    { "distutils.command.clean", NULL, 9339379, 2210, NUITKA_BYTECODE_FLAG },
    { "distutils.command.config", NULL, 9341589, 10345, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install", NULL, 9351934, 14099, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_data", NULL, 9366033, 2355, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_egg_info", NULL, 9368388, 3016, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_headers", NULL, 9371404, 1755, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_lib", NULL, 9373159, 5207, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_scripts", NULL, 9378366, 2221, NUITKA_BYTECODE_FLAG },
    { "distutils.command.register", NULL, 9380587, 8443, NUITKA_BYTECODE_FLAG },
    { "distutils.command.sdist", NULL, 9389030, 13140, NUITKA_BYTECODE_FLAG },
    { "distutils.command.upload", NULL, 9402170, 5081, NUITKA_BYTECODE_FLAG },
    { "distutils.config", NULL, 9407251, 3518, NUITKA_BYTECODE_FLAG },
    { "distutils.core", NULL, 9410769, 6834, NUITKA_BYTECODE_FLAG },
    { "distutils.cygwinccompiler", NULL, 9417603, 8539, NUITKA_BYTECODE_FLAG },
    { "distutils.debug", NULL, 9426142, 219, NUITKA_BYTECODE_FLAG },
    { "distutils.dep_util", NULL, 9426361, 2735, NUITKA_BYTECODE_FLAG },
    { "distutils.dir_util", NULL, 9429096, 5835, NUITKA_BYTECODE_FLAG },
    { "distutils.dist", NULL, 9434931, 34244, NUITKA_BYTECODE_FLAG },
    { "distutils.errors", NULL, 6392110, 5505, NUITKA_BYTECODE_FLAG },
    { "distutils.extension", NULL, 9469175, 6981, NUITKA_BYTECODE_FLAG },
    { "distutils.fancy_getopt", NULL, 9476156, 10684, NUITKA_BYTECODE_FLAG },
    { "distutils.file_util", NULL, 9486840, 5928, NUITKA_BYTECODE_FLAG },
    { "distutils.filelist", NULL, 9492768, 9896, NUITKA_BYTECODE_FLAG },
    { "distutils.log", NULL, 6397615, 2292, NUITKA_BYTECODE_FLAG },
    { "distutils.msvc9compiler", NULL, 9502664, 17475, NUITKA_BYTECODE_FLAG },
    { "distutils.msvccompiler", NULL, 9520139, 14599, NUITKA_BYTECODE_FLAG },
    { "distutils.spawn", NULL, 9534738, 5004, NUITKA_BYTECODE_FLAG },
    { "distutils.sysconfig", NULL, 6399907, 11910, NUITKA_BYTECODE_FLAG },
    { "distutils.text_file", NULL, 9539742, 8489, NUITKA_BYTECODE_FLAG },
    { "distutils.unixccompiler", NULL, 6411817, 6561, NUITKA_BYTECODE_FLAG },
    { "distutils.util", NULL, 9548231, 15554, NUITKA_BYTECODE_FLAG },
    { "distutils.version", NULL, 6418378, 7385, NUITKA_BYTECODE_FLAG },
    { "distutils.versionpredicate", NULL, 9563785, 5114, NUITKA_BYTECODE_FLAG },
    { "doctest", NULL, 9568899, 75622, NUITKA_BYTECODE_FLAG },
    { "dummy_threading", NULL, 6425763, 1135, NUITKA_BYTECODE_FLAG },
    { "email", NULL, 6426898, 1702, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email._encoded_words", NULL, 9644521, 5677, NUITKA_BYTECODE_FLAG },
    { "email._header_value_parser", NULL, 9650198, 76020, NUITKA_BYTECODE_FLAG },
    { "email._parseaddr", NULL, 9726218, 12473, NUITKA_BYTECODE_FLAG },
    { "email._policybase", NULL, 9738691, 14861, NUITKA_BYTECODE_FLAG },
    { "email.base64mime", NULL, 9753552, 3251, NUITKA_BYTECODE_FLAG },
    { "email.charset", NULL, 9756803, 11544, NUITKA_BYTECODE_FLAG },
    { "email.contentmanager", NULL, 9768347, 7321, NUITKA_BYTECODE_FLAG },
    { "email.encoders", NULL, 9775668, 1673, NUITKA_BYTECODE_FLAG },
    { "email.errors", NULL, 9777341, 5990, NUITKA_BYTECODE_FLAG },
    { "email.feedparser", NULL, 9783331, 10677, NUITKA_BYTECODE_FLAG },
    { "email.generator", NULL, 9794008, 12546, NUITKA_BYTECODE_FLAG },
    { "email.header", NULL, 9806554, 16513, NUITKA_BYTECODE_FLAG },
    { "email.headerregistry", NULL, 9823067, 21311, NUITKA_BYTECODE_FLAG },
    { "email.iterators", NULL, 9844378, 1943, NUITKA_BYTECODE_FLAG },
    { "email.message", NULL, 9846321, 38025, NUITKA_BYTECODE_FLAG },
    { "email.mime", NULL, 9884346, 157, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email.mime.application", NULL, 9884503, 1468, NUITKA_BYTECODE_FLAG },
    { "email.mime.audio", NULL, 9885971, 2627, NUITKA_BYTECODE_FLAG },
    { "email.mime.base", NULL, 9888598, 1093, NUITKA_BYTECODE_FLAG },
    { "email.mime.image", NULL, 9889691, 1913, NUITKA_BYTECODE_FLAG },
    { "email.mime.message", NULL, 9891604, 1342, NUITKA_BYTECODE_FLAG },
    { "email.mime.multipart", NULL, 9892946, 1564, NUITKA_BYTECODE_FLAG },
    { "email.mime.nonmultipart", NULL, 9894510, 779, NUITKA_BYTECODE_FLAG },
    { "email.mime.text", NULL, 9895289, 1326, NUITKA_BYTECODE_FLAG },
    { "email.parser", NULL, 9896615, 5758, NUITKA_BYTECODE_FLAG },
    { "email.policy", NULL, 9902373, 9651, NUITKA_BYTECODE_FLAG },
    { "email.quoprimime", NULL, 9912024, 7713, NUITKA_BYTECODE_FLAG },
    { "email.utils", NULL, 6428600, 9907, NUITKA_BYTECODE_FLAG },
    { "filecmp", NULL, 9919737, 8338, NUITKA_BYTECODE_FLAG },
    { "fileinput", NULL, 9928075, 13185, NUITKA_BYTECODE_FLAG },
    { "fnmatch", NULL, 6471707, 2907, NUITKA_BYTECODE_FLAG },
    { "formatter", NULL, 9941260, 17612, NUITKA_BYTECODE_FLAG },
    { "fractions", NULL, 6474614, 18459, NUITKA_BYTECODE_FLAG },
    { "ftplib", NULL, 9958872, 28231, NUITKA_BYTECODE_FLAG },
    { "getopt", NULL, 9987103, 6250, NUITKA_BYTECODE_FLAG },
    { "getpass", NULL, 9993353, 4210, NUITKA_BYTECODE_FLAG },
    { "gettext", NULL, 9997563, 14230, NUITKA_BYTECODE_FLAG },
    { "glob", NULL, 6517033, 4292, NUITKA_BYTECODE_FLAG },
    { "gzip", NULL, 6521325, 16259, NUITKA_BYTECODE_FLAG },
    { "hashlib", NULL, 6537584, 6669, NUITKA_BYTECODE_FLAG },
    { "hmac", NULL, 6558578, 4869, NUITKA_BYTECODE_FLAG },
    { "html", NULL, 10011793, 3410, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "html.entities", NULL, 10015203, 50480, NUITKA_BYTECODE_FLAG },
    { "html.parser", NULL, 10065683, 11197, NUITKA_BYTECODE_FLAG },
    { "http", NULL, 6563447, 6560, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "http.client", NULL, 10076880, 34372, NUITKA_BYTECODE_FLAG },
    { "http.cookiejar", NULL, 10111252, 53938, NUITKA_BYTECODE_FLAG },
    { "http.cookies", NULL, 6570007, 16185, NUITKA_BYTECODE_FLAG },
    { "http.server", NULL, 10165190, 32251, NUITKA_BYTECODE_FLAG },
    { "imaplib", NULL, 10197441, 42132, NUITKA_BYTECODE_FLAG },
    { "imghdr", NULL, 10239573, 4183, NUITKA_BYTECODE_FLAG },
    { "imp", NULL, 6586192, 9729, NUITKA_BYTECODE_FLAG },
    { "importlib.abc", NULL, 10243756, 11326, NUITKA_BYTECODE_FLAG },
    { "importlib.util", NULL, 10255082, 8933, NUITKA_BYTECODE_FLAG },
    { "ipaddress", NULL, 6683367, 62405, NUITKA_BYTECODE_FLAG },
    { "json", NULL, 6745772, 12674, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "json.decoder", NULL, 10264015, 9988, NUITKA_BYTECODE_FLAG },
    { "json.encoder", NULL, 10274003, 11290, NUITKA_BYTECODE_FLAG },
    { "json.scanner", NULL, 10285293, 2003, NUITKA_BYTECODE_FLAG },
    { "json.tool", NULL, 10287296, 1578, NUITKA_BYTECODE_FLAG },
    { "lib2to3", NULL, 10288874, 154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.btm_matcher", NULL, 10289028, 4965, NUITKA_BYTECODE_FLAG },
    { "lib2to3.btm_utils", NULL, 10293993, 6164, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_base", NULL, 10300157, 6256, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_util", NULL, 10306413, 12069, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes", NULL, 10318482, 160, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.fixes.fix_apply", NULL, 10318642, 1708, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_asserts", NULL, 10320350, 1283, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_basestring", NULL, 10321633, 673, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_buffer", NULL, 10322306, 818, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_dict", NULL, 10323124, 3341, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_except", NULL, 10326465, 2828, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exec", NULL, 10329293, 1159, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_execfile", NULL, 10330452, 1693, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exitfunc", NULL, 10332145, 2306, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_filter", NULL, 10334451, 2371, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_funcattrs", NULL, 10336822, 984, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_future", NULL, 10337806, 794, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_getcwdu", NULL, 10338600, 798, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_has_key", NULL, 10339398, 2928, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_idioms", NULL, 10342326, 3913, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_import", NULL, 10346239, 2800, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports", NULL, 10349039, 4359, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports2", NULL, 10353398, 558, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_input", NULL, 10353956, 960, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_intern", NULL, 10354916, 1172, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_isinstance", NULL, 10356088, 1570, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools", NULL, 10357658, 1564, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools_imports", NULL, 10359222, 1619, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_long", NULL, 10360841, 715, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_map", NULL, 10361556, 3103, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_metaclass", NULL, 10364659, 5386, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_methodattrs", NULL, 10370045, 946, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ne", NULL, 10370991, 817, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_next", NULL, 10371808, 3070, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_nonzero", NULL, 10374878, 933, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_numliterals", NULL, 10375811, 1039, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_operator", NULL, 10376850, 4247, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_paren", NULL, 10381097, 1400, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_print", NULL, 10382497, 2340, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raise", NULL, 10384837, 2259, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raw_input", NULL, 10387096, 805, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reduce", NULL, 10387901, 1140, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reload", NULL, 10389041, 1172, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_renames", NULL, 10390213, 2003, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_repr", NULL, 10392216, 855, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_set_literal", NULL, 10393071, 1697, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_standarderror", NULL, 10394768, 730, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_sys_exc", NULL, 10395498, 1411, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_throw", NULL, 10396909, 1812, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_tuple_params", NULL, 10398721, 4606, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_types", NULL, 10403327, 1839, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_unicode", NULL, 10405166, 1553, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_urllib", NULL, 10406719, 5998, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ws_comma", NULL, 10412717, 1133, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xrange", NULL, 10413850, 2548, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xreadlines", NULL, 10416398, 1127, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_zip", NULL, 10417525, 1591, NUITKA_BYTECODE_FLAG },
    { "lib2to3.main", NULL, 10419116, 8563, NUITKA_BYTECODE_FLAG },
    { "lib2to3.patcomp", NULL, 10427679, 5635, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2", NULL, 10433314, 190, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.pgen2.driver", NULL, 10433504, 5159, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.grammar", NULL, 10438663, 7088, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.literals", NULL, 10445751, 1565, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.parse", NULL, 10447316, 6360, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.pgen", NULL, 10453676, 9816, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.token", NULL, 10463492, 1883, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.tokenize", NULL, 10465375, 15417, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pygram", NULL, 10480792, 1209, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pytree", NULL, 10482001, 25167, NUITKA_BYTECODE_FLAG },
    { "lib2to3.refactor", NULL, 10507168, 20822, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 6792524, 60375, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "logging.config", NULL, 10527990, 23251, NUITKA_BYTECODE_FLAG },
    { "logging.handlers", NULL, 10551241, 43285, NUITKA_BYTECODE_FLAG },
    { "lzma", NULL, 6852899, 12025, NUITKA_BYTECODE_FLAG },
    { "macpath", NULL, 10594526, 5674, NUITKA_BYTECODE_FLAG },
    { "macurl2path", NULL, 10600200, 1900, NUITKA_BYTECODE_FLAG },
    { "mailbox", NULL, 10602100, 63785, NUITKA_BYTECODE_FLAG },
    { "mailcap", NULL, 10665885, 6511, NUITKA_BYTECODE_FLAG },
    { "mimetypes", NULL, 6864924, 15576, NUITKA_BYTECODE_FLAG },
    { "modulefinder", NULL, 10672396, 15399, NUITKA_BYTECODE_FLAG },
    { "msilib", NULL, 10687795, 15973, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "msilib.schema", NULL, 10703768, 54232, NUITKA_BYTECODE_FLAG },
    { "msilib.sequence", NULL, 10758000, 3901, NUITKA_BYTECODE_FLAG },
    { "msilib.text", NULL, 10761901, 10045, NUITKA_BYTECODE_FLAG },
    { "multiprocessing", NULL, 6880500, 538, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.connection", NULL, 10771946, 24814, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.context", NULL, 10796760, 13129, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.dummy", NULL, 10809889, 3748, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.dummy.connection", NULL, 10813637, 2528, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.forkserver", NULL, 10816165, 6869, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.heap", NULL, 10823034, 6110, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.managers", NULL, 10829144, 33334, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.pool", NULL, 10862478, 20854, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_spawn_win32", NULL, 10883332, 2791, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.process", NULL, 10886123, 8172, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.queues", NULL, 10894295, 8967, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.reduction", NULL, 10903262, 7983, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.resource_sharer", NULL, 10911245, 5187, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.semaphore_tracker", NULL, 10916432, 3700, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.sharedctypes", NULL, 10920132, 6907, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.spawn", NULL, 10927039, 6474, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.synchronize", NULL, 10933513, 11602, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.util", NULL, 10945115, 9831, NUITKA_BYTECODE_FLAG },
    { "netrc", NULL, 6881038, 3869, NUITKA_BYTECODE_FLAG },
    { "nntplib", NULL, 10954946, 33813, NUITKA_BYTECODE_FLAG },
    { "nturl2path", NULL, 10988759, 1532, NUITKA_BYTECODE_FLAG },
    { "numbers", NULL, 6898605, 12175, NUITKA_BYTECODE_FLAG },
    { "optparse", NULL, 10990291, 48087, NUITKA_BYTECODE_FLAG },
    { "pathlib", NULL, 7198357, 41915, NUITKA_BYTECODE_FLAG },
    { "pdb", NULL, 7240272, 46127, NUITKA_BYTECODE_FLAG },
    { "pickle", NULL, 7286399, 42724, NUITKA_BYTECODE_FLAG },
    { "pickletools", NULL, 11038378, 66079, NUITKA_BYTECODE_FLAG },
    { "pipes", NULL, 7329123, 7841, NUITKA_BYTECODE_FLAG },
    { "pkgutil", NULL, 7336964, 16294, NUITKA_BYTECODE_FLAG },
    { "platform", NULL, 7353258, 28017, NUITKA_BYTECODE_FLAG },
    { "plistlib", NULL, 11104457, 27651, NUITKA_BYTECODE_FLAG },
    { "poplib", NULL, 11132108, 13361, NUITKA_BYTECODE_FLAG },
    { "posixpath", NULL, 7381275, 10422, NUITKA_BYTECODE_FLAG },
    { "pprint", NULL, 7391697, 15857, NUITKA_BYTECODE_FLAG },
    { "profile", NULL, 11145469, 13934, NUITKA_BYTECODE_FLAG },
    { "pstats", NULL, 11159403, 21890, NUITKA_BYTECODE_FLAG },
    { "py_compile", NULL, 11181293, 6577, NUITKA_BYTECODE_FLAG },
    { "pyclbr", NULL, 11187870, 8398, NUITKA_BYTECODE_FLAG },
    { "pydoc", NULL, 7407554, 84267, NUITKA_BYTECODE_FLAG },
    { "pydoc_data", NULL, 11196268, 157, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pydoc_data.topics", NULL, 11196425, 400763, NUITKA_BYTECODE_FLAG },
    { "queue", NULL, 11597188, 8788, NUITKA_BYTECODE_FLAG },
    { "random", NULL, 7491821, 19330, NUITKA_BYTECODE_FLAG },
    { "rlcompleter", NULL, 11605976, 5813, NUITKA_BYTECODE_FLAG },
    { "runpy", NULL, 11611789, 8015, NUITKA_BYTECODE_FLAG },
    { "sched", NULL, 11619804, 6597, NUITKA_BYTECODE_FLAG },
    { "secrets", NULL, 11626401, 2195, NUITKA_BYTECODE_FLAG },
    { "selectors", NULL, 11628596, 17730, NUITKA_BYTECODE_FLAG },
    { "shelve", NULL, 11646326, 9491, NUITKA_BYTECODE_FLAG },
    { "shlex", NULL, 7525242, 7003, NUITKA_BYTECODE_FLAG },
    { "shutil", NULL, 7532245, 30418, NUITKA_BYTECODE_FLAG },
    { "signal", NULL, 7562663, 2548, NUITKA_BYTECODE_FLAG },
    { "site", NULL, 7565211, 12467, NUITKA_BYTECODE_FLAG },
    { "smtpd", NULL, 11655817, 26716, NUITKA_BYTECODE_FLAG },
    { "smtplib", NULL, 11682533, 35358, NUITKA_BYTECODE_FLAG },
    { "sndhdr", NULL, 11717891, 6946, NUITKA_BYTECODE_FLAG },
    { "socket", NULL, 7577678, 22046, NUITKA_BYTECODE_FLAG },
    { "socketserver", NULL, 11724837, 24271, NUITKA_BYTECODE_FLAG },
    { "sqlite3", NULL, 11749108, 185, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "sqlite3.dbapi2", NULL, 11749293, 2504, NUITKA_BYTECODE_FLAG },
    { "sqlite3.dump", NULL, 11751797, 1947, NUITKA_BYTECODE_FLAG },
    { "ssl", NULL, 7605729, 36168, NUITKA_BYTECODE_FLAG },
    { "statistics", NULL, 11753744, 18207, NUITKA_BYTECODE_FLAG },
    { "string", NULL, 7641897, 7997, NUITKA_BYTECODE_FLAG },
    { "subprocess", NULL, 7650239, 35189, NUITKA_BYTECODE_FLAG },
    { "sunau", NULL, 11771951, 16971, NUITKA_BYTECODE_FLAG },
    { "symbol", NULL, 11788922, 2550, NUITKA_BYTECODE_FLAG },
    { "symtable", NULL, 11791472, 10461, NUITKA_BYTECODE_FLAG },
    { "sysconfig", NULL, 11801933, 15864, NUITKA_BYTECODE_FLAG },
    { "tabnanny", NULL, 11817797, 7008, NUITKA_BYTECODE_FLAG },
    { "tarfile", NULL, 7685428, 62624, NUITKA_BYTECODE_FLAG },
    { "telnetlib", NULL, 11824805, 18130, NUITKA_BYTECODE_FLAG },
    { "tempfile", NULL, 7748052, 22260, NUITKA_BYTECODE_FLAG },
    { "textwrap", NULL, 7770312, 13717, NUITKA_BYTECODE_FLAG },
    { "this", NULL, 11842935, 1298, NUITKA_BYTECODE_FLAG },
    { "timeit", NULL, 11844233, 11636, NUITKA_BYTECODE_FLAG },
    { "tkinter", NULL, 11855869, 179652, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "tkinter.colorchooser", NULL, 12035521, 1150, NUITKA_BYTECODE_FLAG },
    { "tkinter.commondialog", NULL, 12036671, 1129, NUITKA_BYTECODE_FLAG },
    { "tkinter.constants", NULL, 12037800, 1679, NUITKA_BYTECODE_FLAG },
    { "tkinter.dialog", NULL, 12039479, 1474, NUITKA_BYTECODE_FLAG },
    { "tkinter.dnd", NULL, 12040953, 11197, NUITKA_BYTECODE_FLAG },
    { "tkinter.filedialog", NULL, 12052150, 12308, NUITKA_BYTECODE_FLAG },
    { "tkinter.font", NULL, 12064458, 6193, NUITKA_BYTECODE_FLAG },
    { "tkinter.messagebox", NULL, 12070651, 3063, NUITKA_BYTECODE_FLAG },
    { "tkinter.scrolledtext", NULL, 12073714, 2190, NUITKA_BYTECODE_FLAG },
    { "tkinter.simpledialog", NULL, 12075904, 10562, NUITKA_BYTECODE_FLAG },
    { "tkinter.tix", NULL, 12086466, 83686, NUITKA_BYTECODE_FLAG },
    { "tkinter.ttk", NULL, 12170152, 56976, NUITKA_BYTECODE_FLAG },
    { "trace", NULL, 12227128, 19526, NUITKA_BYTECODE_FLAG },
    { "tracemalloc", NULL, 12246654, 17262, NUITKA_BYTECODE_FLAG },
    { "turtle", NULL, 12263916, 131784, NUITKA_BYTECODE_FLAG },
    { "typing", NULL, 12395700, 73339, NUITKA_BYTECODE_FLAG },
    { "unittest", NULL, 7867675, 3022, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "unittest.case", NULL, 7870697, 47670, NUITKA_BYTECODE_FLAG },
    { "unittest.loader", NULL, 12469039, 13899, NUITKA_BYTECODE_FLAG },
    { "unittest.main", NULL, 12482938, 7045, NUITKA_BYTECODE_FLAG },
    { "unittest.mock", NULL, 12489983, 61789, NUITKA_BYTECODE_FLAG },
    { "unittest.result", NULL, 12551772, 7259, NUITKA_BYTECODE_FLAG },
    { "unittest.runner", NULL, 12559031, 6889, NUITKA_BYTECODE_FLAG },
    { "unittest.signals", NULL, 12565920, 2205, NUITKA_BYTECODE_FLAG },
    { "unittest.suite", NULL, 12568125, 9204, NUITKA_BYTECODE_FLAG },
    { "unittest.util", NULL, 12577329, 4786, NUITKA_BYTECODE_FLAG },
    { "urllib", NULL, 7918367, 153, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "urllib.error", NULL, 7918520, 2787, NUITKA_BYTECODE_FLAG },
    { "urllib.parse", NULL, 7921307, 29501, NUITKA_BYTECODE_FLAG },
    { "urllib.request", NULL, 7950808, 72647, NUITKA_BYTECODE_FLAG },
    { "urllib.response", NULL, 12582115, 3260, NUITKA_BYTECODE_FLAG },
    { "urllib.robotparser", NULL, 12585375, 7084, NUITKA_BYTECODE_FLAG },
    { "uu", NULL, 12592459, 3531, NUITKA_BYTECODE_FLAG },
    { "uuid", NULL, 8023455, 20951, NUITKA_BYTECODE_FLAG },
    { "venv", NULL, 12595990, 13669, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wave", NULL, 12609659, 17918, NUITKA_BYTECODE_FLAG },
    { "webbrowser", NULL, 8076873, 15881, NUITKA_BYTECODE_FLAG },
    { "wsgiref", NULL, 12627577, 749, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wsgiref.handlers", NULL, 12628326, 16181, NUITKA_BYTECODE_FLAG },
    { "wsgiref.headers", NULL, 12644507, 7770, NUITKA_BYTECODE_FLAG },
    { "wsgiref.simple_server", NULL, 12652277, 5226, NUITKA_BYTECODE_FLAG },
    { "wsgiref.util", NULL, 12657503, 5225, NUITKA_BYTECODE_FLAG },
    { "wsgiref.validate", NULL, 12662728, 14833, NUITKA_BYTECODE_FLAG },
    { "xdrlib", NULL, 12677561, 8335, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 8092754, 717, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom", NULL, 8093471, 5464, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom.NodeFilter", NULL, 12685896, 984, NUITKA_BYTECODE_FLAG },
    { "xml.dom.domreg", NULL, 12686880, 2792, NUITKA_BYTECODE_FLAG },
    { "xml.dom.expatbuilder", NULL, 8098935, 27177, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minicompat", NULL, 12689672, 2822, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minidom", NULL, 8126112, 55879, NUITKA_BYTECODE_FLAG },
    { "xml.dom.pulldom", NULL, 8181991, 10568, NUITKA_BYTECODE_FLAG },
    { "xml.dom.xmlbuilder", NULL, 12692494, 13584, NUITKA_BYTECODE_FLAG },
    { "xml.etree", NULL, 8192559, 156, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.etree.ElementInclude", NULL, 12706078, 1592, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementPath", NULL, 12707670, 6168, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementTree", NULL, 8192715, 44761, NUITKA_BYTECODE_FLAG },
    { "xml.etree.cElementTree", NULL, 8237476, 198, NUITKA_BYTECODE_FLAG },
    { "xml.parsers", NULL, 8237674, 330, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 8238004, 359, NUITKA_BYTECODE_FLAG },
    { "xml.sax", NULL, 8238363, 3154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.sax._exceptions", NULL, 12713838, 5498, NUITKA_BYTECODE_FLAG },
    { "xml.sax.expatreader", NULL, 8241517, 12431, NUITKA_BYTECODE_FLAG },
    { "xml.sax.handler", NULL, 12719336, 12346, NUITKA_BYTECODE_FLAG },
    { "xml.sax.saxutils", NULL, 12731682, 12840, NUITKA_BYTECODE_FLAG },
    { "xml.sax.xmlreader", NULL, 12744522, 16955, NUITKA_BYTECODE_FLAG },
    { "xmlrpc", NULL, 8253948, 153, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xmlrpc.client", NULL, 8254101, 34696, NUITKA_BYTECODE_FLAG },
    { "xmlrpc.server", NULL, 12761477, 29587, NUITKA_BYTECODE_FLAG },
    { "zipapp", NULL, 12791064, 5567, NUITKA_BYTECODE_FLAG },
    { "zipfile", NULL, 8288797, 48237, NUITKA_BYTECODE_FLAG },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
