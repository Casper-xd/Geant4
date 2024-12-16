#include "../include/Physics.hh"

PhysicsList::PhysicsList(){
    // G4VModularPhysicsList* physicsList = new FTFP_BERT;
    // physicsList->ReplacePhysics(new G4EmStandardPhysics_option4());
    // auto opticalPhysics = new G4OpticalPhysics();
    // physicsList->RegisterPhysics(opticalPhysics);
    RegisterPhysics (new G4EmStandardPhysics_option4());
    RegisterPhysics (new G4OpticalPhysics());
}

PhysicsList::~PhysicsList(){}