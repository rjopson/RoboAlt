
import rocket_project

db = rocket_project.PyRocket()
db.create_rocket("29mm", "testing...")
print(db.get_rocket_name(1))

