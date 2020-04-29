#include "experimental_stage.h"

ExperimentalStage::ExperimentalStage(Stage* stage)
    : stage_(stage),
      motor_(nullptr),
      flight_data_(new ExperimentalData()),
      mass_total_measured_(-1.0),
      mass_propellant_measured_(-1.0) {
}

ExperimentalStage::~ExperimentalStage() {

    delete flight_data_;
}