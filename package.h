#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include<iostream>
using namespace std;


class Customer
{
    private:
        string customerName;
    public:
        string vehicleType;
        void setName()
        {
            cout<<"\nEnter Your Name:";
            cin>>customerName;
        }
        string getName()
        {
            return customerName;
        }
        void price(int ,int ,ostream&);
};
class Carc:public Customer
{
    private:
        int initAmt;
    public:
        Carc()
        {
            vehicleType="Car";
            initAmt=6000;
        }
        int getAmt()
        {
            return initAmt;
        }
};
class Scooterc:public Customer
{
    private:
        int initAmt;
    public:
        Scooterc()
        {
            vehicleType="Scooter";
            initAmt=2500;
        }
        friend ostream& operator <<(ostream&,Scooterc&);
};
class Bikec:public Customer
{
    private:
        int initAmt;
    public:
        Bikec()
        {
            vehicleType="Bike";
            initAmt=4000;
        }
        friend ostream& operator <<(ostream&,Bikec&);
};

class Suspension
{
    public:
        char *shock_absorbers;
        char *arms;
        char *knuckle;
        char *rear_spring;
        char *nuts_bolts;
    public:
        Suspension();
        ~Suspension();
        char* get_shock_absorbers()
        {
            return shock_absorbers;
        }
        char* get_arms()
        {
            return arms;
        }
        char* get_knuckle()
        {
            return knuckle;
        }
        char* get_rear_spring()
        {
            return rear_spring;
        }
        char* get_nuts_bolts()
        {
            return nuts_bolts;
        }
        void Shock_Absorbers();
        void Arms();
        void Knuckle();
        void Rear_Spring();
        void Nuts_Bolts();
};

class Engine
{
    private:
        char *engine_oil;
        char *oil_filter;
        char *valve_clearance;
        char *spark_plug;
        char *spark_plug_gap;
    public:
        Engine();
        ~Engine();
        char* get_engine_oil()
        {
            return engine_oil;
        }
        char* get_oil_filter()
        {
            return oil_filter;
        }
        char* get_valve_clearance()
        {
            return valve_clearance;
        }
        char* get_spark_plug()
        {
            return spark_plug;
        }
        char* get_spark_plug_gap()
        {
            return spark_plug_gap;
        }
        void Engine_Oil();
        void Oil_Filter();
        void Valve_Clearance();
        void Spark_Plug();
        void Spark_Plug_Gap();
};
class CarEngine:public Engine
{
    private:
        char *water_pump;
        char *alternator_belt_tension;
        char *engine_coolant;
        char *cooling_system;
        char *exhaust_system;
        char *pcv_system;
        char *cylinder_head;
        char *manifolds_nuts_bolts;
        char *camshaft_timing_belt;
        char *distributor_cap;
        char *distributor_rotor;
    public:
        CarEngine();
        ~CarEngine();
        char* get_water_pump()
        {
            return water_pump;
        }
        char* get_alternator_belt_tension()
        {
            return alternator_belt_tension;
        }
        char* get_engine_coolant()
        {
            return engine_coolant;
        }
        char* get_cooling_system()
        {
            return cooling_system;
        }
        char* get_exhaust_system()
        {
            return exhaust_system;
        }
        char* get_pcv_system()
        {
            return pcv_system;
        }
        char* get_cylinder_head()
        {
            return cylinder_head;
        }
        char* get_manifolds_nuts_bolts()
        {
            return manifolds_nuts_bolts;
        }
        char* get_camshaft_timing_belt()
        {
            return camshaft_timing_belt;
        }
        char* get_distributor_cap()
        {
            return distributor_cap;
        }
        char* get_distributor_rotor()
        {
            return distributor_rotor;
        }
        void Water_Pump();
        void Alternator_Belt_Tension();
        void Engine_Coolant();
        void Cooling_System();
        void Exhaust_System();
        void PCV_System();
        void Cylinder_Head();
        void Manifolds_Nuts_Bolts();
        void Camshaft_Timing_Belt();
        void Distributor_Cap();
        void Distributor_Rotor();
};
class Scooter_Bike_Engine:public Engine
{
    private:
        char *choke;
        char *engine_breather;
        char *engine_idling_rpm;
    public:
        Scooter_Bike_Engine();
        ~Scooter_Bike_Engine();
        char* get_choke()
        {
            return choke;
        }
        char* get_engine_breather()
        {
            return engine_breather;
        }
        char* get_engine_idling_rpm()
        {
            return engine_idling_rpm;
        }
        void Choke();
        void Engine_Breather();
        void Engine_Idling_RPM();
};
class ScooterEngine:public Scooter_Bike_Engine
{
    private:
        char *secondary_air_filter;
        char *final_drive_oil;
    public:
        ScooterEngine();
        ~ScooterEngine();
        char* get_secondary_air_filter()
        {
            return secondary_air_filter;
        }
        char* get_final_drive_oil()
        {
            return final_drive_oil;
        }
        void Secondary_Air_Filter();
        void Final_Drive_Oil();

};
class BikeEngine:public Scooter_Bike_Engine
{
    private:
        char *oil_cooler_pipe;
        char *oil_cooler_fin;
        char *carburettor_assembly;
        char *carburettor_ducts;
        char *co_percent;
    public:
        BikeEngine();
        ~BikeEngine();
        char* get_oil_cooler_pipe()
        {
            return oil_cooler_pipe;
        }
        char* get_oil_cooler_fin()
        {
            return oil_cooler_fin;
        }
        char* get_carburettor_assembly()
        {
            return carburettor_assembly;
        }
        char* get_carburettor_ducts()
        {
            return carburettor_ducts;
        }
        char* get_co_percent()
        {
            return co_percent;
        }
        void Oil_Cooler_Pipe();
        void Oil_Cooler_Fin();
        void Carburettor_Assembly();
        void Carburettor_Ducts();
        void CO_percent();
};

class Fuel
{
    private:
        char *air_cleaner;
        char *lines_connections;
        char *tank_cap;
    public:
        Fuel();
        ~Fuel();
        char* get_air_cleaner()
        {
            return air_cleaner;
        }
        char* get_lines_connections()
        {
            return lines_connections;
        }
        char* get_tank_cap()
        {
            return tank_cap;
        }
        void Air_Cleaner();
        void Lines_Connections();
        void Tank_Cap();
};
class CarFuel:public Fuel
{
    private:
        char *accelerator_cable;
        char *accelerator_shaft;
        char *filter;
    public:
        CarFuel();
        ~CarFuel();
        char* get_accelerator_cable()
        {
            return accelerator_cable;
        }
        char* get_accelerator_shaft()
        {
            return accelerator_shaft;
        }
        char* get_filter()
        {
            return filter;
        }
        void Accelerator_Cable();
        void Accelerator_Shaft();
        void Filter();
};
class ScooterFuel:public Fuel
{
    private:
        char *throttle_cables;
        char *throttle_grip;
        char *throttle_play;
    public:
        ScooterFuel();
        ~ScooterFuel();
        char* get_throttle_cables()
        {
            return throttle_cables;
        }
        char* get_throttle_grip()
        {
            return throttle_grip;
        }
        char* get_throttle_play()
        {
            return throttle_play;
        }
        void Throttle_Cables();
        void Throttle_Grip();
        void Throttle_Play();
};
class BikeFuel:public ScooterFuel
{
    private:
        char *fuel_cock_sediment_bowl;
        char *evap_hose;
        char *fuel_tank_assembly;
        char *noise;
        char *jerk;
        char *canister;
    public:
        char* get_fuel_cock_sediment_bowl()
        {
            return fuel_cock_sediment_bowl;
        }
        char* get_evap_hose()
        {
            return evap_hose;
        }
        char* get_fuel_tank_assembly()
        {
            return fuel_tank_assembly;
        }
        char* get_noise()
        {
            return noise;
        }
        char* get_jerk()
        {
            return jerk;
        }
        char* get_canister()
        {
            return canister;
        }
        BikeFuel();
        ~BikeFuel();
        void Fuel_Cock_Sediment_Bowl();
        void EVAP_hose();
        void Fuel_Tank_Assembly();
        void Noise();
        void Jerk();
        void Canister();
};

class CarClutch
{
    private:
        char *pedal;
        char *slipping;
    public:
        CarClutch();
        ~CarClutch();
        char* get_pedal()
        {
            return pedal;
        }
        char* get_slipping()
        {
            return slipping;
        }
        void Pedal();
        void Slipping();
};
class BikeClutch
{
    private:
        char *clutch_cable;
        char *clutch_play;
    public:
        BikeClutch();
        ~BikeClutch();
        char* get_clutch_cable()
        {
            return clutch_cable;
        }
        char* get_clutch_play()
        {
            return clutch_play;
        }
        void Clutch_Cable();
        void Clutch_Play();
};

class Transmission
{
    private:
        char *gear_shifter_cable;
    public:
        Transmission();
        ~Transmission();
        char* get_gear_shifter_cable()
        {
            return gear_shifter_cable;
        }
        void Gear_Shifter_Cable();
};
class CarTransmission:public Transmission
{
    private:
        char *transmission_oil;
        char *differential_oil;
        char *transfer_oil;
        char *auto_transmission_fluid;
        char *hose_auto_transmission_fluid;
        char *drive_shaft_boots;
        char *propeller_shaft_play;
        char *universal_joints_slack;
    public:
        CarTransmission();
        ~CarTransmission();
        char* get_transmission_oil()
        {
            return transmission_oil;
        }
        char* get_differential_oil()
        {
            return differential_oil;
        }
        char* get_transfer_oil()
        {
            return transfer_oil;
        }
        char* get_auto_transmission_fluid()
        {
            return auto_transmission_fluid;
        }
        char* get_hose_auto_transmission_fluid()
        {
            return hose_auto_transmission_fluid;
        }
        char* get_drive_shaft_boots()
        {
            return drive_shaft_boots;
        }
        char* get_propeller_shaft_play()
        {
            return propeller_shaft_play;
        }
        char* get_universal_joints_slack()
        {
            return universal_joints_slack;
        }
        void Transmission_Oil();
        void Differential_Oil();
        void Transfer_Oil();
        void Auto_Transmission_Fluid();
        void Hose_Auto_Transmission_Fluid();
        void Drive_Shaft_Boots();
        void Propeller_Shaft_Play();
        void Universal_Joints_Slack();
};
class BikeTransmission:public Transmission
{
    private:
        char *gear_shift_lever;
    public:
        BikeTransmission();
        ~BikeTransmission();
        char* get_gear_shift_lever()
        {
            return gear_shift_lever;
        }
        void Gear_Shift_Lever();
};

class Brake
{
    private:
        char *fluid;
        char *pedal_play;
        char *hoses_pipes;
        char *disc_pads;
        char *drum_shoes;
        char *brake_light_switch;
    public:
        Brake();
        ~Brake();
        char* get_fluid()
        {
            return fluid;
        }
        char* get_pedal_play()
        {
            return pedal_play;
        }
        char* get_hoses_pipes()
        {
            return hoses_pipes;
        }
        char* get_disc_pads()
        {
            return disc_pads;
        }
        char* get_drum_shoes()
        {
            return drum_shoes;
        }
        char* get_brake_light_switch()
        {
            return brake_light_switch;
        }
        void Fluid();
        void Pedal_Play();
        void Hoses_Pipes();
        void Disc_Pads();
        void Drum_Shoes();
        void Brake_Light_Switch();
};
class CarBrake:public Brake
{
    private:
        char *parking_brake_lever;
    public:
        CarBrake();
        ~CarBrake();
        char* get_parking_brake_lever()
        {
            return parking_brake_lever;
        }
        void Parking_Brake_Lever();
};
class ScooterBrake:public Brake
{
    private:
        char *clutch_shoes_wear;
    public:
        ScooterBrake();
        ~ScooterBrake();
        char* get_clutch_shoes_wear()
        {
            return clutch_shoes_wear;
        }
        void Clutch_Shoes_Wear();
};
class BikeBrake:public Brake
{
    private:
        char *brake_pedal_shaft;
        char *bundy_tube_mountings;
    public:
        BikeBrake();
        ~BikeBrake();
        char* get_brake_pedal_shaft()
        {
            return brake_pedal_shaft;
        }
        char* get_bundy_tube_mountings()
        {
            return bundy_tube_mountings;
        }
        void Brake_Pedal_Shaft();
        void Bundy_Tube_Mountings();
};

class Wheel
{
    private:
        char *tyre;
        char *wheels;
        char *wheel_bearings;
        char *wheel_freeness;
    public:
        Wheel();
        ~Wheel();
        char* get_tyre()
        {
            return tyre;
        }
        char* get_wheels()
        {
            return wheels;
        }
        char* get_wheel_bearings()
        {
            return wheel_bearings;
        }
        char* get_wheel_freeness()
        {
            return wheel_freeness;
        }
        void Tyre();
        void Wheels();
        void Wheel_Bearings();
        void Wheel_Freeness();
};
class BikeWheel:public Wheel
{
    private:
        char* wheel_speed_sensor;
        char* wheel_speed_sensor_cable_clamp;
        char* toner_ring;
        char* toner_ring_teeth_damage;
        char* wss_cable;
    public:
        BikeWheel();
        ~BikeWheel();
        char* get_wheel_speed_sensor()
        {
            return wheel_speed_sensor;
        }
        char* get_wheel_speed_sensor_cable_clamp()
        {
            return wheel_speed_sensor_cable_clamp;
        }
        char* get_toner_ring()
        {
            return toner_ring;
        }
        char* get_toner_ring_teeth_damage()
        {
            return toner_ring_teeth_damage;
        }
        char* get_wss_cable()
        {
            return wss_cable;
        }
        void Wheel_Speed_Sensor();
        void Wheel_Speed_Sensor_Cable_Clamp();
        void Toner_Ring();
        void Toner_Ring_Teeth_Damage();
        void WSS_Cable();
};

class CarSteering
{
    private:
        char *steering_wheel;
        char *rods_arms;
        char *power_steering_system;
        char *steering_gear_box;
        char *tilt_steering;
    public:
        CarSteering();
        ~CarSteering();
        char* get_steering_wheel()
        {
            return steering_wheel;
        }
        char* get_rods_arms()
        {
            return rods_arms;
        }
        char* get_power_steering_system()
        {
            return power_steering_system;
        }
        char* get_steering_gear_box()
        {
            return steering_gear_box;
        }
        char* get_tilt_steering()
        {
            return tilt_steering;
        }
        void Steering_Wheel();
        void Rods_Arms();
        void Power_Steering_System();
        void Steering_Gear_Box();
        void Tilt_Steering();
};
class Scooter_Bike_Steering
{
    private:
        char *steering;
    public:
        Scooter_Bike_Steering();
        ~Scooter_Bike_Steering();
        char* get_steering()
        {
            return steering;
        }
        void Steering();
};

class Electrical
{
    private:
        char *battery_electrolyte;
        char *lighting_system;
        char *head_light_beam;
        char *headlight_indicator_switch;
        char *horn;
    public:
        Electrical();
        ~Electrical();
        char* get_battery_electrolyte()
        {
            return battery_electrolyte;
        }
        char* get_lighting_system()
        {
            return lighting_system;
        }
        char* get_head_light_beam()
        {
            return head_light_beam;
        }
        char* get_headlight_indicator_switch()
        {
            return headlight_indicator_switch;
        }
        char* get_horn()
        {
            return horn;
        }
        void Battery_Electrolyte();
        void Lighting_System();
        void Head_Light_Beam();
        void Headlight_Indicator_Switch();
        void Horn();
};
class CarElectrical:public Electrical
{
    private:
        char *wiper;
        char *wiring_harness_connections;
    public:
        CarElectrical();
        ~CarElectrical();
        char* get_wiper()
        {
            return wiper;
        }
        char* get_wiring_harness_connections()
        {
            return wiring_harness_connections;
        }
        void Wiper();
        void Wiring_Harness_Connections();
};
class ScooterElectrical:public Electrical
{
    private:
        char *starter_switch;
    public:
        ScooterElectrical();
        ~ScooterElectrical();
        char* get_starter_switch()
        {
            return starter_switch;
        }
        void Starter_Switch();
};
class BikeElectrical:public ScooterElectrical
{
    private:
        char *specific_gravity;
        char *voltage;
    public:
        BikeElectrical();
        ~BikeElectrical();
        char* get_specific_gravity()
        {
            return specific_gravity;
        }
        char* get_voltage()
        {
            return voltage;
        }
        void Specific_Gravity();
        void Voltage();
};

class Body
{
    private:
        char *nuts_bolts_fasteners;
    public:
        Body();
        ~Body();
        char* get_nuts_bolts_fasteners()
        {
            return nuts_bolts_fasteners;
        }
        void Nuts_Bolts_Fasteners();
};
class CarBody:public Body
{
    private:
        char *latch;
        char *central_locking;
        char *seat_belt;
        char *seat_latch;
        char *seat_lever;
        char *seat_knob;
    public:
        CarBody();
        ~CarBody();
        char* get_latch()
        {
            return latch;
        }
        char* get_central_locking()
        {
            return central_locking;
        }
        char* get_seat_belt()
        {
            return seat_belt;
        }
        char* get_seat_latch()
        {
            return seat_latch;
        }
        char* get_seat_lever()
        {
            return seat_lever;
        }
        char* get_seat_knob()
        {
            return seat_knob;
        }
        void Latch();
        void Central_Locking();
        void Seat_Belt();
        void Seat_Latch();
        void Seat_Lever();
        void Seat_Knob();
};
class Scooter_Bike_Body:public Body
{
    private:
        char *center_side_stand;
    public:
        char* get_center_side_stand()
        {
            return center_side_stand;
        }
        void Center_Side_Stand();
        Scooter_Bike_Body();
        ~Scooter_Bike_Body();
};
class ScooterBody:public Scooter_Bike_Body
{
    private:
        char *drive_belt;
        char *drive_belt_case;
    public:
        ScooterBody();
        ~ScooterBody();
        char* get_drive_belt()
        {
            return drive_belt;
        }
        char* get_drive_belt_case()
        {
            return drive_belt_case;
        }
        void Drive_Belt();
        void Drive_Belt_Case();
};
class BikeBody:public Scooter_Bike_Body
{
    private:
        char *drive_chain;
        char *drive_chain_play;
        char *hose_connection;
        char *hecu;
    public:
        BikeBody();
        ~BikeBody();
        char* get_drive_chain()
        {
            return drive_chain;
        }
        char* get_drive_chain_play()
        {
            return drive_chain_play;
        }
        char* get_hose_connection()
        {
            return hose_connection;
        }
        char* get_hecu()
        {
            return hecu;
        }
        void Drive_Chain();
        void Drive_Chain_Play();
        void Hose_Connection();
        void HECU();
};

class CarAirCondition
{
    private:
        char *drive_belt;
        char *receiver_drier_bubbles;
        char *recirc_flap;
        char *hose_joints;
        char *compressor_mounting_bolts;
        char *condenser;
    public:
        CarAirCondition();
        ~CarAirCondition();
        char* get_drive_belt()
        {
            return drive_belt;
        }
        char* get_receiver_drier_bubbles()
        {
            return receiver_drier_bubbles;
        }
        char* get_recirc_flap()
        {
            return recirc_flap;
        }
        char* get_hose_joints()
        {
            return hose_joints;
        }
        char* get_compressor_mounting_bolts()
        {
            return compressor_mounting_bolts;
        }
        char* get_condenser()
        {
            return condenser;
        }
        void Drive_Belt();
        void Receiver_Drier_Bubbles();
        void Recirc_Flap();
        void Hose_Joints();
        void Compressor_Mounting_Bolts();
        void Condenser();
};

class ScooterRoadTest
{
    private:
        char *brake;
        char *speedometer;
        char *noise;
    public:
        ScooterRoadTest();
        ~ScooterRoadTest();
        char* get_brake()
        {
            return brake;
        }
        char* get_speedometer()
        {
            return speedometer;
        }
        char* get_noise()
        {
            return noise;
        }
        void Brake();
        void Speedometer();
        void Noise();
};
class Car_Bike_RoadTest:public ScooterRoadTest
{
    private:
        char *clutch;
        char *gear_shifting;
    public:
        Car_Bike_RoadTest();
        ~Car_Bike_RoadTest();
        char* get_clutch()
        {
            return clutch;
        }
        char* get_gear_shifting()
        {
            return gear_shifting;
        }
        void Clutch();
        void Gear_Shifting();
};

class Vehicle
{
    public:
        Suspension suspension;
        static int count;
};
class Car:public Vehicle
{
    public:
        CarEngine car_engine;
        CarFuel car_fuel;
        CarClutch car_clutch;
        CarTransmission car_transmission;
        CarBrake car_brake;
        Wheel car_wheel;
        CarSteering car_steering;
        CarElectrical car_electrical;
        CarBody car_body;
        CarAirCondition car_aircondition;
        Car_Bike_RoadTest car_roadtest;
        friend ostream& operator <<(ostream&,Car&);
};
class Scooter:public Vehicle
{
    public:
        ScooterEngine scooter_engine;
        ScooterFuel scooter_fuel;
        ScooterBrake scooter_brake;
        Wheel scooter_wheel;
        Scooter_Bike_Steering scooter_steering;
        ScooterElectrical scooter_electrical;
        ScooterBody scooter_body;
        ScooterRoadTest scooter_roadtest;
        friend ostream& operator <<(ostream&,Scooter&);
};
class Bike:public Vehicle
{
    public:
        BikeEngine bike_engine;
        BikeFuel bike_fuel;
        BikeClutch bike_clutch;
        BikeTransmission bike_transmission;
        BikeBrake bike_brake;
        BikeWheel bike_wheel;
        Scooter_Bike_Steering bike_steering;
        BikeElectrical bike_electrical;
        BikeBody bike_body;
        Car_Bike_RoadTest bike_roadtest;
        friend ostream& operator <<(ostream&,Bike&);
};
#endif // PACKAGE_H_INCLUDED

