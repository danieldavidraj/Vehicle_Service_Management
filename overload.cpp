#include <iostream>
#include"package.h"
using namespace std;

string Print(char *c)
{
    string job;
    switch(*c)
    {
        case 'O':
        case 'o':job="Checked OK\n\n";break;
        case 'A':
        case 'a':job="Adjust\n\n";break;
        case 'C':
        case 'c':job="Clean\n\n";break;
        case 'T':
        case 't':job="Tighten\n\n";break;
        case 'R':
        case 'r':job="Repair\n\n";break;
        case 'X':
        case 'x':job="Replace\n\n";break;
        case 'L':
        case 'l':job="Lubricate\n\n";break;
    }
    return job;
}

bool suspension=0,engine=0,fuel=0,clutch=0,transmission=0,brake=0,wheel=0,steering=0,electrical=0,body=0,aircondition=0,roadtest=0;
string Header(string word,bool &flag)
{
    if(flag)
    {
        word="";
    }
    else
    {
        flag=1;
    }
    return word;
}
ostream& operator <<(ostream& cout,Car& car)
{
    if(car.suspension.get_shock_absorbers()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tShock Absorbers - ";
        cout<<Print(car.suspension.get_shock_absorbers());
    }
    if(car.suspension.get_arms()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tSuspension Arms - ";
        cout<<Print(car.suspension.get_arms());
    }
    if(car.suspension.get_knuckle()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tSuspension Knuckle - ";
        cout<<Print(car.suspension.get_knuckle());
    }
    if(car.suspension.get_rear_spring()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tSuspension Rear Spring - ";
        cout<<Print(car.suspension.get_rear_spring());
    }
    if(car.suspension.get_nuts_bolts()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tNuts and Bolts - ";
        cout<<Print(car.suspension.get_nuts_bolts());
    }
    if(car.car_engine.get_engine_oil()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tEngine Oil - ";
        cout<<Print(car.car_engine.get_engine_oil());
    }
    if(car.car_engine.get_oil_filter()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tOil Filter - ";
        cout<<Print(car.car_engine.get_oil_filter());
    }
    if(car.car_engine.get_valve_clearance()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tValve Clearance - ";
        cout<<Print(car.car_engine.get_valve_clearance());
    }
    if(car.car_engine.get_spark_plug()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tSpark Plug - ";
        cout<<Print(car.car_engine.get_spark_plug());
    }
    if(car.car_engine.get_spark_plug_gap()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tSpark Plug Gap - ";
        cout<<Print(car.car_engine.get_spark_plug_gap());
    }
    if(car.car_engine.get_water_pump()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tWater Pump - ";
        cout<<Print(car.car_engine.get_water_pump());
    }
    if(car.car_engine.get_alternator_belt_tension()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tAlternator Belt Tension - ";
        cout<<Print(car.car_engine.get_alternator_belt_tension());
    }
    if(car.car_engine.get_engine_coolant()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tEngine Coolant - ";
        cout<<Print(car.car_engine.get_engine_coolant());
    }
    if(car.car_engine.get_cooling_system()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tCooling System - ";
        cout<<Print(car.car_engine.get_cooling_system());
    }
    if(car.car_engine.get_exhaust_system()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tExhaust System - ";
        cout<<Print(car.car_engine.get_exhaust_system());
    }
    if(car.car_engine.get_pcv_system()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tPCV System - ";
        cout<<Print(car.car_engine.get_pcv_system());
    }
    if(car.car_engine.get_cylinder_head()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tCylinder Head - ";
        cout<<Print(car.car_engine.get_cylinder_head());
    }
    if(car.car_engine.get_manifolds_nuts_bolts()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tManifolds Nuts and Bolts - ";
        cout<<Print(car.car_engine.get_manifolds_nuts_bolts());
    }
    if(car.car_engine.get_camshaft_timing_belt()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tCamshaft Timing Belt - ";
        cout<<Print(car.car_engine.get_camshaft_timing_belt());
    }
    if(car.car_engine.get_distributor_cap()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tDistributor Cap - ";
        cout<<Print(car.car_engine.get_distributor_cap());
    }
    if(car.car_engine.get_distributor_rotor()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tDistributor Rotor - ";
        cout<<Print(car.car_engine.get_distributor_rotor());
    }
    if(car.car_fuel.get_air_cleaner()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tAir Cleaner - ";
        cout<<Print(car.car_fuel.get_air_cleaner());
    }
    if(car.car_fuel.get_lines_connections()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tFuel lines and connections - ";
        cout<<Print(car.car_fuel.get_lines_connections());
    }
    if(car.car_fuel.get_tank_cap()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tFuel Tank Cap - ";
        cout<<Print(car.car_fuel.get_tank_cap());
    }
    if(car.car_fuel.get_accelerator_cable()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tAccelerator Cable - ";
        cout<<Print(car.car_fuel.get_accelerator_cable());
    }
    if(car.car_fuel.get_accelerator_shaft()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tAccelerator Shaft - ";
        cout<<Print(car.car_fuel.get_accelerator_shaft());
    }
    if(car.car_fuel.get_filter()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tFuel Filter - ";
        cout<<Print(car.car_fuel.get_filter());
    }
    if(car.car_clutch.get_pedal()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tClutch Pedal - ";
        cout<<Print(car.car_clutch.get_pedal());
    }
    if(car.car_clutch.get_slipping()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tClutch Slipping - ";
        cout<<Print(car.car_clutch.get_slipping());
    }
    if(car.car_transmission.get_gear_shifter_cable()!=NULL)
    {
        cout<<Header("\nTRANSMISSION\n\n",fuel);
        cout<<"\tGear Shifter Cable - ";
        cout<<Print(car.car_transmission.get_gear_shifter_cable());
    }
    if(car.car_transmission.get_transmission_oil()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tTransmission Oil - ";
        cout<<Print(car.car_transmission.get_transmission_oil());
    }
    if(car.car_transmission.get_differential_oil()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tDifferential Oil - ";
        cout<<Print(car.car_transmission.get_differential_oil());
    }
    if(car.car_transmission.get_transfer_oil()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tTransfer Oil - ";
        cout<<Print(car.car_transmission.get_transfer_oil());
    }
    if(car.car_transmission.get_auto_transmission_fluid()!=NULL)
    {
        cout<<Header("\nTRANSMISSION\n\n",fuel);
        cout<<"\tAutomatic Transmission Fluid - ";
        cout<<Print(car.car_transmission.get_auto_transmission_fluid());
    }
    if(car.car_transmission.get_hose_auto_transmission_fluid()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tHose Auto Transmission Fluid - ";
        cout<<Print(car.car_transmission.get_hose_auto_transmission_fluid());
    }
    if(car.car_transmission.get_drive_shaft_boots()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tDrive Shaft Boots - ";
        cout<<Print(car.car_transmission.get_drive_shaft_boots());
    }
    if(car.car_transmission.get_propeller_shaft_play()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tPropeller Shaft Play - ";
        cout<<Print(car.car_transmission.get_propeller_shaft_play());
    }
    if(car.car_transmission.get_universal_joints_slack()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tUniversal Joints Slack - ";
        cout<<Print(car.car_transmission.get_universal_joints_slack());
    }
    if(car.car_brake.get_fluid()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Fluid - ";
        cout<<Print(car.car_brake.get_fluid());
    }
    if(car.car_brake.get_pedal_play()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Pedal Play - ";
        cout<<Print(car.car_brake.get_pedal_play());
    }
    if(car.car_brake.get_hoses_pipes()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Hoses and Pipes - ";
        cout<<Print(car.car_brake.get_hoses_pipes());
    }
    if(car.car_brake.get_disc_pads()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Disc and Pads - ";
        cout<<Print(car.car_brake.get_disc_pads());
    }
    if(car.car_brake.get_drum_shoes()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Drum and Shoes - ";
        cout<<Print(car.car_brake.get_drum_shoes());
    }
    if(car.car_brake.get_brake_light_switch()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Light Switch - ";
        cout<<Print(car.car_brake.get_brake_light_switch());
    }
    if(car.car_brake.get_parking_brake_lever()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tParking Brake Lever - ";
        cout<<Print(car.car_brake.get_parking_brake_lever());
    }
    if(car.car_wheel.get_tyre()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tTyre - ";
        cout<<Print(car.car_wheel.get_tyre());
    }
    if(car.car_wheel.get_wheels())
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheels - ";
        cout<<Print(car.car_wheel.get_wheels());
    }
    if(car.car_wheel.get_wheel_bearings()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheel Bearings - ";
        cout<<Print(car.car_wheel.get_wheel_bearings());
    }
    if(car.car_wheel.get_wheel_freeness()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheel Freeness - ";
        cout<<Print(car.car_wheel.get_wheel_freeness());
    }
    if(car.car_steering.get_steering_wheel()!=NULL)
    {
        cout<<Header("\nSTEERING\n\n",steering);
        cout<<"\tSteering_Wheel - ";
        cout<<Print(car.car_steering.get_steering_wheel());
    }
    if(car.car_steering.get_rods_arms()!=NULL)
    {
        cout<<Header("\nSTEERING\n\n",steering);
        cout<<"\tRods and Arms - ";
        cout<<Print(car.car_steering.get_rods_arms());
    }
    if(car.car_steering.get_power_steering_system()!=NULL)
    {
        cout<<Header("\nSTEERING\n\n",steering);
        cout<<"\tPower Steering System - ";
        cout<<Print(car.car_steering.get_power_steering_system());
    }
    if(car.car_steering.get_steering_gear_box()!=NULL)
    {
        cout<<Header("\nSTEERING\n\n",steering);
        cout<<"\tSteering Gear Box - ";
        cout<<Print(car.car_steering.get_steering_gear_box());
    }
    if(car.car_steering.get_tilt_steering()!=NULL)
    {
        cout<<Header("\nSTEERING\n\n",steering);
        cout<<"\tTilt Steering - ";
        cout<<Print(car.car_steering.get_tilt_steering());
    }
    if( car.car_electrical.get_battery_electrolyte()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tBattery Electrolyte - ";
        cout<<Print(car.car_electrical.get_battery_electrolyte());
    }
    if( car.car_electrical.get_lighting_system()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tLighting System - ";
        cout<<Print(car.car_electrical.get_lighting_system());
    }
    if( car.car_electrical.get_head_light_beam()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tHead Light Beam - ";
        cout<<Print(car.car_electrical.get_head_light_beam());
    }
    if( car.car_electrical.get_headlight_indicator_switch()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tHeadlight and Indicator Switch - ";
        cout<<Print(car.car_electrical.get_headlight_indicator_switch());
    }
    if( car.car_electrical.get_horn()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tHorn - ";
        cout<<Print(car.car_electrical.get_horn());
    }
    if( car.car_electrical.get_wiper()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tWiper - ";
        cout<<Print(car.car_electrical.get_wiper());
    }
    if( car.car_electrical.get_wiring_harness_connections()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tWiring Harness Connections - ";
        cout<<Print(car.car_electrical.get_wiring_harness_connections());
    }
    if( car.car_body.get_nuts_bolts_fasteners()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tAll Nuts,Bolts and Fasteners - ";
        cout<<Print(car.car_body.get_nuts_bolts_fasteners());
    }
    if( car.car_body.get_latch()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tLatches - ";
        cout<<Print(car.car_body.get_latch());
    }
    if( car.car_body.get_central_locking()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tCentral Locking - ";
        cout<<Print(car.car_body.get_central_locking());
    }
    if( car.car_body.get_seat_belt()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tSeat Belt - ";
        cout<<Print(car.car_body.get_seat_belt());
    }
    if( car.car_body.get_seat_latch()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tSeat Latch - ";
        cout<<Print(car.car_body.get_seat_latch());
    }
    if( car.car_body.get_seat_lever()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tSeat Lever - ";
        cout<<Print(car.car_body.get_seat_lever());
    }
    if( car.car_body.get_seat_knob()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tSeat Knob - ";
        cout<<Print(car.car_body.get_seat_knob());
    }
    if( car.car_aircondition.get_drive_belt()!=NULL)
    {
        cout<<Header("\nAIR CONDITION\n\n",aircondition);
        cout<<"\tDrive Belt - ";
        cout<<Print(car.car_aircondition.get_drive_belt());
    }
    if( car.car_aircondition.get_receiver_drier_bubbles()!=NULL)
    {
        cout<<Header("\nAIR CONDITION\n\n",aircondition);
        cout<<"\tReceiver Drier Bubbles - ";
        cout<<Print(car.car_aircondition.get_receiver_drier_bubbles());
    }
    if( car.car_aircondition.get_recirc_flap()!=NULL)
    {
        cout<<Header("\nAIR CONDITION\n\n",aircondition);
        cout<<"\tRecirc_Flap - ";
        cout<<Print(car.car_aircondition.get_recirc_flap());
    }
    if( car.car_aircondition.get_hose_joints()!=NULL)
    {
        cout<<Header("\nAIR CONDITION\n\n",aircondition);
        cout<<"\tHose Joints - ";
        cout<<Print(car.car_aircondition.get_hose_joints());
    }
    if( car.car_aircondition.get_compressor_mounting_bolts()!=NULL)
    {
        cout<<Header("\nAIR CONDITION\n\n",aircondition);
        cout<<"\tCompressor Mounting Bolts - ";
        cout<<Print(car.car_aircondition.get_compressor_mounting_bolts());
    }
    if( car.car_aircondition.get_condenser()!=NULL)
    {
        cout<<Header("\nAIR CONDITION\n\n",aircondition);
        cout<<"\tCondenser - ";
        cout<<Print(car.car_aircondition.get_condenser());
    }
    if( car.car_roadtest.get_brake()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Brakes - ";
        cout<<Print(car.car_roadtest.get_brake());
    }
    if( car.car_roadtest.get_speedometer()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Speedometer - ";
        cout<<Print(car.car_roadtest.get_speedometer());
    }
    if( car.car_roadtest.get_noise()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tBody Noise - ";
        cout<<Print(car.car_roadtest.get_noise());
    }
    if( car.car_roadtest.get_clutch()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Clutch - ";
        cout<<Print(car.car_roadtest.get_clutch());
    }
    if( car.car_roadtest.get_gear_shifting()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Gear Shifting - ";
        cout<<Print(car.car_roadtest.get_gear_shifting());
    }
    return cout;
}

ostream& operator <<(ostream& cout,Scooter& scooter)
{
    if( scooter.suspension.get_shock_absorbers()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tShock Absorbers - ";
        cout<<Print(scooter.suspension.get_shock_absorbers());
    }
    if( scooter.suspension.get_arms()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tSuspension Arms - ";
        cout<<Print(scooter.suspension.get_arms());
    }
    if( scooter.suspension.get_knuckle()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tSuspension Knuckle - ";
        cout<<Print(scooter.suspension.get_knuckle());
    }
    if( scooter.suspension.get_rear_spring()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tSuspension Rear Spring - ";
        cout<<Print(scooter.suspension.get_rear_spring());
    }
    if( scooter.suspension.get_nuts_bolts()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tNuts and Bolts - ";
        cout<<Print(scooter.suspension.get_nuts_bolts());
    }
    if( scooter.scooter_engine.get_engine_oil()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tEngine Oil - ";
        cout<<Print(scooter.scooter_engine.get_engine_oil());
    }
    if( scooter.scooter_engine.get_oil_filter()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tOil Filter - ";
        cout<<Print(scooter.scooter_engine.get_oil_filter());
    }
    if( scooter.scooter_engine.get_valve_clearance()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tValve Clearance - ";
        cout<<Print(scooter.scooter_engine.get_valve_clearance());
    }
    if( scooter.scooter_engine.get_spark_plug()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tSpark Plug - ";
        cout<<Print(scooter.scooter_engine.get_spark_plug());
    }
    if( scooter.scooter_engine.get_spark_plug_gap()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tSpark Plug Gap - ";
        cout<<Print(scooter.scooter_engine.get_spark_plug_gap());
    }
    if( scooter.scooter_engine.get_choke()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tChoke - ";
        cout<<Print(scooter.scooter_engine.get_choke());
    }
    if( scooter.scooter_engine.get_engine_breather()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tEngine Breather - ";
        cout<<Print(scooter.scooter_engine.get_engine_breather());
    }
    if( scooter.scooter_engine.get_engine_idling_rpm()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tEngine Idling RPM - ";
        cout<<Print(scooter.scooter_engine.get_engine_idling_rpm());
    }
    if( scooter.scooter_engine.get_secondary_air_filter()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tSecondary Air Filter - ";
        cout<<Print(scooter.scooter_engine.get_secondary_air_filter());
    }
    if( scooter.scooter_engine.get_final_drive_oil()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tFinal Drive Oil - ";
        cout<<Print(scooter.scooter_engine.get_final_drive_oil());
    }
    if( scooter.scooter_fuel.get_air_cleaner()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tAir Cleaner - ";
        cout<<Print(scooter.scooter_fuel.get_air_cleaner());
    }
    if( scooter.scooter_fuel.get_lines_connections()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tFuel lines and connections - ";
        cout<<Print(scooter.scooter_fuel.get_lines_connections());
    }
    if( scooter.scooter_fuel.get_tank_cap()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tFuel Tank Cap - ";
        cout<<Print(scooter.scooter_fuel.get_tank_cap());
    }
    if( scooter.scooter_fuel.get_throttle_cables()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tThrottle Cables - ";
        cout<<Print(scooter.scooter_fuel.get_throttle_cables());
    }
    if( scooter.scooter_fuel.get_throttle_grip()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tThrottle Grip - ";
        cout<<Print(scooter.scooter_fuel.get_throttle_grip());
    }
    if( scooter.scooter_fuel.get_throttle_play()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tThrottle Play - ";
        cout<<Print(scooter.scooter_fuel.get_throttle_play());
    }
    if( scooter.scooter_brake.get_fluid()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Fluid - ";
        cout<<Print(scooter.scooter_brake.get_fluid());
    }
    if( scooter.scooter_brake.get_pedal_play()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Pedal Play - ";
        cout<<Print(scooter.scooter_brake.get_pedal_play());
    }
    if( scooter.scooter_brake.get_hoses_pipes()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Hoses and Pipes - ";
        cout<<Print(scooter.scooter_brake.get_hoses_pipes());
    }
    if( scooter.scooter_brake.get_disc_pads()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Disc and Pads - ";
        cout<<Print(scooter.scooter_brake.get_disc_pads());
    }
    if( scooter.scooter_brake.get_drum_shoes()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Drum and Shoes - ";
        cout<<Print(scooter.scooter_brake.get_drum_shoes());
    }
    if( scooter.scooter_brake.get_brake_light_switch()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Light Switch - ";
        cout<<Print(scooter.scooter_brake.get_brake_light_switch());
    }
    if( scooter.scooter_brake.get_clutch_shoes_wear()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tClutch Shoe Wear - ";
        cout<<Print(scooter.scooter_brake.get_clutch_shoes_wear());
    }
    if( scooter.scooter_wheel.get_tyre()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tTyre - ";
        cout<<Print(scooter.scooter_wheel.get_tyre());
    }
    if( scooter.scooter_wheel.get_wheels()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheels - ";
        cout<<Print(scooter.scooter_wheel.get_wheels());
    }
    if( scooter.scooter_wheel.get_wheel_bearings()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheel Bearings - ";
        cout<<Print(scooter.scooter_wheel.get_wheel_bearings());
    }
    if( scooter.scooter_wheel.get_wheel_freeness()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheel Freeness - ";
        cout<<Print(scooter.scooter_wheel.get_wheel_freeness());
    }
    if( scooter.scooter_steering.get_steering()!=NULL)
    {
        cout<<Header("\nSTEERING\n\n",steering);
        cout<<"\tSteering - ";
        cout<<Print(scooter.scooter_steering.get_steering());
    }
    if( scooter.scooter_electrical.get_battery_electrolyte()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tBattery Electrolyte - ";
        cout<<Print(scooter.scooter_electrical.get_battery_electrolyte());
    }
    if( scooter.scooter_electrical.get_lighting_system()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tLighting System - ";
        cout<<Print(scooter.scooter_electrical.get_lighting_system());
    }
    if( scooter.scooter_electrical.get_head_light_beam()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tHead Light Beam - ";
        cout<<Print(scooter.scooter_electrical.get_head_light_beam());
    }
    if( scooter.scooter_electrical.get_headlight_indicator_switch()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tHeadlight and Indicator Switch - ";
        cout<<Print(scooter.scooter_electrical.get_headlight_indicator_switch());
    }
    if( scooter.scooter_electrical.get_horn()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tHorn - ";
        cout<<Print(scooter.scooter_electrical.get_horn());
    }
    if( scooter.scooter_electrical.get_starter_switch()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tStarter Switch - ";
        cout<<Print(scooter.scooter_electrical.get_starter_switch());
    }
    if( scooter.scooter_body.get_nuts_bolts_fasteners()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tAll Nuts,Bolts and Fasteners - ";
        cout<<Print(scooter.scooter_body.get_nuts_bolts_fasteners());
    }
    if( scooter.scooter_body.get_center_side_stand()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tCenter and Side Stand - ";
        cout<<Print(scooter.scooter_body.get_center_side_stand());
    }
    if( scooter.scooter_body.get_drive_belt()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tDrive Belt - ";
        cout<<Print(scooter.scooter_body.get_drive_belt());
    }
    if( scooter.scooter_body.get_drive_belt_case()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tDrive Belt Case - ";
        cout<<Print(scooter.scooter_body.get_drive_belt_case());
    }
    if( scooter.scooter_roadtest.get_brake()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Brakes - ";
        cout<<Print(scooter.scooter_roadtest.get_brake());
    }
    if( scooter.scooter_roadtest.get_speedometer()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Speedometer - ";
        cout<<Print(scooter.scooter_roadtest.get_speedometer());
    }
    if( scooter.scooter_roadtest.get_noise()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tBody Noise - ";
        cout<<Print(scooter.scooter_roadtest.get_noise());
    }
    return cout;
}

ostream& operator <<(ostream& cout,Bike& bike)
{
    if( bike.suspension.get_shock_absorbers()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tShock Absorbers - ";
        cout<<Print(bike.suspension.get_shock_absorbers());
    }
    if( bike.suspension.get_arms()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tSuspension Arms - ";
        cout<<Print(bike.suspension.get_arms());
    }
    if( bike.suspension.get_knuckle()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tSuspension Knuckle - ";
        cout<<Print(bike.suspension.get_knuckle());
    }
    if( bike.suspension.get_rear_spring()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tSuspension Rear Spring - ";
        cout<<Print(bike.suspension.get_rear_spring());
    }
    if( bike.suspension.get_nuts_bolts()!=NULL)
    {
        cout<<Header("\nSUSPENSION\n\n",suspension);
        cout<<"\tNuts and Bolts - ";
        cout<<Print(bike.suspension.get_nuts_bolts());
    }
    if( bike.bike_engine.get_engine_oil()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tEngine Oil - ";
        cout<<Print(bike.bike_engine.get_engine_oil());
    }
    if( bike.bike_engine.get_oil_filter()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tOil Filter - ";
        cout<<Print(bike.bike_engine.get_oil_filter());
    }
    if( bike.bike_engine.get_valve_clearance()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tValve Clearance - ";
        cout<<Print(bike.bike_engine.get_valve_clearance());
    }
    if( bike.bike_engine.get_spark_plug()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tSpark Plug - ";
        cout<<Print(bike.bike_engine.get_spark_plug());
    }
    if( bike.bike_engine.get_spark_plug_gap()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tSpark Plug Gap - ";
        cout<<Print(bike.bike_engine.get_spark_plug_gap());
    }
    if( bike.bike_engine.get_choke()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tChoke - ";
        cout<<Print(bike.bike_engine.get_choke());
    }
    if( bike.bike_engine.get_engine_breather()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tEngine Breather - ";
        cout<<Print(bike.bike_engine.get_engine_breather());
    }
    if( bike.bike_engine.get_engine_idling_rpm()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tEngine Idling RPM - ";
        cout<<Print(bike.bike_engine.get_engine_idling_rpm());
    }
    if( bike.bike_engine.get_oil_cooler_pipe()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tOil Cooler Pipe - ";
        cout<<Print(bike.bike_engine.get_oil_cooler_pipe());
    }
    if( bike.bike_engine.get_oil_cooler_fin()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tOil Cooler Fin - ";
        cout<<Print(bike.bike_engine.get_oil_cooler_fin());
    }
    if( bike.bike_engine.get_carburettor_assembly()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tCarburettor Assembly - ";
        cout<<Print(bike.bike_engine.get_carburettor_assembly());
    }
    if( bike.bike_engine.get_carburettor_ducts()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tCarburettor Ducts - ";
        cout<<Print(bike.bike_engine.get_carburettor_ducts());
    }
    if( bike.bike_engine.get_co_percent()!=NULL)
    {
        cout<<Header("\nENGINE\n\n",engine);
        cout<<"\tCO percent - ";
        cout<<Print(bike.bike_engine.get_co_percent());
    }
    if( bike.bike_fuel.get_air_cleaner()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tAir Cleaner - ";
        cout<<Print(bike.bike_fuel.get_air_cleaner());
    }
    if( bike.bike_fuel.get_lines_connections()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tFuel lines and connections - ";
        cout<<Print(bike.bike_fuel.get_lines_connections());
    }
    if( bike.bike_fuel.get_tank_cap()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tFuel Tank Cap - ";
        cout<<Print(bike.bike_fuel.get_tank_cap());
    }
    if( bike.bike_fuel.get_throttle_cables()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tThrottle Cables - ";
        cout<<Print(bike.bike_fuel.get_throttle_cables());
    }
    if( bike.bike_fuel.get_throttle_grip()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tThrottle Grip - ";
        cout<<Print(bike.bike_fuel.get_throttle_grip());
    }
    if( bike.bike_fuel.get_throttle_play()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tThrottle Play - ";
        cout<<Print(bike.bike_fuel.get_throttle_play());
    }
    if( bike.bike_fuel.get_fuel_cock_sediment_bowl()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tFuel Cock Sediment Bowl - ";
        cout<<Print(bike.bike_fuel.get_fuel_cock_sediment_bowl());
    }
    if( bike.bike_fuel.get_evap_hose()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tEVAP hose - ";
        cout<<Print(bike.bike_fuel.get_evap_hose());
    }
    if(bike.bike_fuel.get_fuel_tank_assembly()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tFuel Tank Assembly - ";
        cout<<Print(bike.bike_fuel.get_fuel_tank_assembly());
    }
    if(bike.bike_fuel.get_noise()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tAbnormal Noise - ";
        cout<<Print(bike.bike_fuel.get_noise());
    }
    if(bike.bike_fuel.get_jerk()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tAbnormal Jerk - ";
        cout<<Print(bike.bike_fuel.get_jerk());
    }
    if(bike.bike_fuel.get_canister()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tCanister - ";
        cout<<Print(bike.bike_fuel.get_canister());
    }
    if(bike.bike_clutch.get_clutch_cable()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tClutch Cable - ";
        cout<<Print(bike.bike_clutch.get_clutch_cable());
    }
    if(bike.bike_clutch.get_clutch_play()!=NULL)
    {
        cout<<Header("\nFUEL\n\n",fuel);
        cout<<"\tClutch Play - ";
        cout<<Print(bike.bike_clutch.get_clutch_play());
    }
    if(bike.bike_transmission.get_gear_shifter_cable()!=NULL)
    {
        cout<<Header("\nTRANSMISSION\n\n",fuel);
        cout<<"\tGear Shifter Cable - ";
        cout<<Print(bike.bike_transmission.get_gear_shifter_cable());
    }
    if(bike.bike_transmission.get_gear_shift_lever()!=NULL)
    {
        cout<<Header("\nTRANSMISSION\n\n",fuel);
        cout<<"\tGear Shift Lever - ";
        cout<<Print(bike.bike_transmission.get_gear_shift_lever());
    }
    if(bike.bike_brake.get_fluid()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Fluid - ";
        cout<<Print(bike.bike_brake.get_fluid());
    }
    if(bike.bike_brake.get_pedal_play()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Pedal Play - ";
        cout<<Print(bike.bike_brake.get_pedal_play());
    }
    if(bike.bike_brake.get_hoses_pipes()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Hoses and Pipes - ";
        cout<<Print(bike.bike_brake.get_hoses_pipes());
    }
    if(bike.bike_brake.get_disc_pads()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Disc and Pads - ";
        cout<<Print(bike.bike_brake.get_disc_pads());
    }
    if(bike.bike_brake.get_drum_shoes()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Drum and Shoes - ";
        cout<<Print(bike.bike_brake.get_drum_shoes());
    }
    if(bike.bike_brake.get_brake_light_switch()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Light Switch - ";
        cout<<Print(bike.bike_brake.get_brake_light_switch());
    }
    if(bike.bike_brake.get_brake_pedal_shaft()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBrake Pedal Shaft - ";
        cout<<Print(bike.bike_brake.get_brake_pedal_shaft());
    }
    if(bike.bike_brake.get_bundy_tube_mountings()!=NULL)
    {
        cout<<Header("\nBRAKE\n\n",brake);
        cout<<"\tBundy Tube Mountings - ";
        cout<<Print(bike.bike_brake.get_bundy_tube_mountings());
    }
    if(bike.bike_wheel.get_tyre()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tTyre - ";
        cout<<Print(bike.bike_wheel.get_tyre());
    }
    if(bike.bike_wheel.get_wheels()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheels - ";
        cout<<Print(bike.bike_wheel.get_wheels());
    }
    if(bike.bike_wheel.get_wheel_bearings()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheel Bearings - ";
        cout<<Print(bike.bike_wheel.get_wheel_bearings());
    }
    if(bike.bike_wheel.get_wheel_freeness()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheel Freeness - ";
        cout<<Print(bike.bike_wheel.get_wheel_freeness());
    }
    if(bike.bike_wheel.get_wheel_speed_sensor()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheel Speed Sensor - ";
        cout<<Print(bike.bike_wheel.get_wheel_speed_sensor());
    }
    if(bike.bike_wheel.get_wheel_speed_sensor_cable_clamp()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWheel Speed Sensor Cable Clamp - ";
        cout<<Print(bike.bike_wheel.get_wheel_speed_sensor_cable_clamp());
    }
    if(bike.bike_wheel.get_toner_ring()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tToner Ring - ";
        cout<<Print(bike.bike_wheel.get_toner_ring());
    }
    if(bike.bike_wheel.get_toner_ring_teeth_damage()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tToner Ring Teeth Damage - ";
        cout<<Print(bike.bike_wheel.get_toner_ring_teeth_damage());
    }
    if(bike.bike_wheel.get_wss_cable()!=NULL)
    {
        cout<<Header("\nWHEEL\n\n",wheel);
        cout<<"\tWSS Cable - ";
        cout<<Print(bike.bike_wheel.get_wss_cable());
    }
    if(bike.bike_steering.get_steering()!=NULL)
    {
        cout<<Header("\nSTEERING\n\n",steering);
        cout<<"\tSteering - ";
        cout<<Print(bike.bike_steering.get_steering());

    if(bike.bike_electrical.get_battery_electrolyte()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tBattery Electrolyte - ";
        cout<<Print(bike.bike_electrical.get_battery_electrolyte());
    }
    if(bike.bike_electrical.get_lighting_system()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tLighting System - ";
        cout<<Print(bike.bike_electrical.get_lighting_system());
    }
    if(bike.bike_electrical.get_head_light_beam()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tHead Light Beam - ";
        cout<<Print(bike.bike_electrical.get_head_light_beam());
    }
    if(bike.bike_electrical.get_headlight_indicator_switch()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tHeadlight and Indicator Switch - ";
        cout<<Print(bike.bike_electrical.get_headlight_indicator_switch());
    }
    if(bike.bike_electrical.get_horn()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tHorn - ";
        cout<<Print(bike.bike_electrical.get_horn());
    }
    if(bike.bike_electrical.get_starter_switch()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tStarter Switch - ";
        cout<<Print(bike.bike_electrical.get_starter_switch());
    }
    if(bike.bike_electrical.get_specific_gravity()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tSpecific Gravity - ";
        cout<<Print(bike.bike_electrical.get_specific_gravity());
    }
    if(bike.bike_electrical.get_voltage()!=NULL)
    {
        cout<<Header("\nELECTRICAL\n\n",electrical);
        cout<<"\tVoltage - ";
        cout<<Print(bike.bike_electrical.get_voltage());
    }
    if(bike.bike_body.get_nuts_bolts_fasteners()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tAll Nuts,Bolts and Fasteners - ";
        cout<<Print(bike.bike_body.get_nuts_bolts_fasteners());
    }
    if(bike.bike_body.get_center_side_stand()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tCenter and Side Stand - ";
        cout<<Print(bike.bike_body.get_center_side_stand());
    }
    if(bike.bike_body.get_drive_chain()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tDrive Chain - ";
        cout<<Print(bike.bike_body.get_drive_chain());
    }
    if(bike.bike_body.get_drive_chain_play()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tDrive Chain Play - ";
        cout<<Print(bike.bike_body.get_drive_chain_play());
    }
    if(bike.bike_body.get_hose_connection()!=NULL)

        cout<<Header("\nBODY\n\n",body);
        cout<<"\tHose Connection - ";
        cout<<Print(bike.bike_body.get_hose_connection());
    }
    if(bike.bike_body.get_hecu()!=NULL)
    {
        cout<<Header("\nBODY\n\n",body);
        cout<<"\tHECU - ";
        cout<<Print(bike.bike_body.get_hecu());
    }
    if(bike.bike_roadtest.get_brake()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Brakes - ";
        cout<<Print(bike.bike_roadtest.get_brake());
    }
    if(bike.bike_roadtest.get_speedometer()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Speedometer - ";
        cout<<Print(bike.bike_roadtest.get_speedometer());
    }
    if(bike.bike_roadtest.get_noise()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tBody Noise - ";
        cout<<Print(bike.bike_roadtest.get_noise());
    }
    if(bike.bike_roadtest.get_clutch()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Clutch - ";
        cout<<Print(bike.bike_roadtest.get_clutch());
    }
    if(bike.bike_roadtest.get_gear_shifting()!=NULL)
    {
        cout<<Header("\nROAD TEST\n\n",roadtest);
        cout<<"\tOperation of Gear Shifting - ";
        cout<<Print(bike.bike_roadtest.get_gear_shifting());
    }
    return cout;
}
