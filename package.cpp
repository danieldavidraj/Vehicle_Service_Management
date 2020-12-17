#include <iostream>
#include<limits>
#include <iomanip>
#include"package.h"
using namespace std;

void Validate() throw(int);         //exception handling

char* Job(char *c)
{
    if(*c=='O' || *c=='o' || *c=='A' || *c=='a' || *c=='C' || *c=='c' || *c=='T' || *c=='t' || *c=='R' ||
       *c=='r' || *c=='X' || *c=='x' || *c=='L' || *c=='l')
    {
        cout<<"Do you want to replace this item with another job?\n";
     l2:cout<<"1)Yes\n";
        cout<<"2)No\n";
        int n;
        cin>>n;
        try
        {
            Validate();
        }
        catch(int x)
        {
            goto l2;
        }
        if(n==1)
        {
            Vehicle::count--;
            goto l3;
        }
        else if(n==2)
        {
            return c;
        }
        else
        {
            cout<<"Invalid Entry\n";
            goto l2;
        }
    }
    else
    {
        goto l3;
    }
 l3:cout<<"\n1)Checked OK : O\n";
    cout<<"2)Adjust :     A\n";
    cout<<"3)Clean :      C\n";
    cout<<"4)Tighten :    T\n";
    cout<<"5)Repair :     R\n";
    cout<<"6)Replace :    X\n";
    cout<<"7)Lubricate :  L\n";
    l1:cout<<"Job :";
    cin>>c;
    switch(*c)
    {
        case 'O':
        case 'o':cout<<"Checked OK.The Job has been executed successfully\n\n";break;
        case 'A':
        case 'a':cout<<"Adjust Complete\n\n";break;
        case 'C':
        case 'c':cout<<"Clean,the job is done\n\n";break;
        case 'T':
        case 't':cout<<"Tightened,the job has been executed successfully\n\n";break;
        case 'R':
        case 'r':cout<<"Repair Complete\n\n";break;
        case 'X':
        case 'x':cout<<"Replace,the job is done\n\n";break;
        case 'L':
        case 'l':cout<<"Lubricate\n\n";break;
        default:cout<<"Please enter from only the above\n";goto l1;
    }
    Vehicle::count++;
    return c;
}

char* New(char *c)
{
    if(c==NULL)
    {
        c=new char;
    }
    return c;
}

int Vehicle::count=0;

int i=0;
Suspension::Suspension()
{
    shock_absorbers=NULL;
    arms=NULL;
    knuckle=NULL;
    rear_spring=NULL;
    nuts_bolts=NULL;
    cout<<"\nSUSPENSION\n\n";
    cout<<"\t"<<++i<<")Shock Absorbers\n";
    cout<<"\t"<<++i<<")Suspension Arms\n";
    cout<<"\t"<<++i<<")Suspension Knuckle\n";
    cout<<"\t"<<++i<<")Suspension Rear Spring\n";
    cout<<"\t"<<++i<<")Nuts and Bolts\n";
}
Suspension::~Suspension()
{
    delete[] shock_absorbers;
    delete[] arms;
    delete[] knuckle;
    delete[] rear_spring;
    delete[] nuts_bolts;
}
void Suspension::Shock_Absorbers()
{
    cout<<"Inspect shock absorbers for proper operation and oil leakage if any.\n";
    shock_absorbers=New(shock_absorbers);
    shock_absorbers=Job(shock_absorbers);
}
void Suspension::Arms()
{
    cout<<"Inspect suspension arms for any damage and tighten if necessary.\n";
    arms=New(arms);
    arms=Job(arms);
}
void Suspension::Knuckle()
{
    cout<<"Inspect suspension knuckle for any damage and tighten if necessary.\n";
    knuckle=New(knuckle);
    knuckle=Job(knuckle);
}
void Suspension::Rear_Spring()
{
    cout<<"Inspect suspension rear spring for any damage and tighten if necessary.\n";
    rear_spring=New(rear_spring);
    rear_spring=Job(rear_spring);
}
void Suspension::Nuts_Bolts()
{
    cout<<"Inspect all nuts and bolts and tighten  if necessary.\n";
    nuts_bolts=New(nuts_bolts);
    nuts_bolts=Job(nuts_bolts);
}

Engine::Engine()
{
    engine_oil=NULL;
    oil_filter=NULL;
    valve_clearance=NULL;
    spark_plug=NULL;
    spark_plug_gap=NULL;
    cout<<"\nENGINE\n\n";
    cout<<"\t"<<++i<<")Engine Oil\n";
    cout<<"\t"<<++i<<")Oil Filter\n";
    cout<<"\t"<<++i<<")Valve Clearance\n";
    cout<<"\t"<<++i<<")Spark Plug\n";
    cout<<"\t"<<++i<<")Spark Plug Gap\n";
}
Engine::~Engine()
{
    delete[] engine_oil;
    delete[] oil_filter;
    delete[] valve_clearance;
    delete[] spark_plug;
    delete[] spark_plug_gap;
}
void Engine::Engine_Oil()
{
    cout<<"\nInspect engine oil for any leakage and top-up or replace if necessary.\n";
    engine_oil=New(engine_oil);
    engine_oil=Job(engine_oil);
}
void Engine::Oil_Filter()
{
    cout<<"\nInspect oil filter and clean or replace if necessary.\n";
    oil_filter=New(oil_filter);
    oil_filter=Job(oil_filter);
}
void Engine::Valve_Clearance()
{
    cout<<"Inspect valve clearance and adjust if necessary\n";
    valve_clearance=New(valve_clearance);
    valve_clearance=Job(valve_clearance);
}
void Engine::Spark_Plug()
{
    cout<<"Inspect color of spark plug and clean or replace if necessary.\n";
    spark_plug=New(spark_plug);
    spark_plug=Job(spark_plug);
}
void Engine::Spark_Plug_Gap()
{
    cout<<".Inspect spark plug gap and adjust if necessary.\n";
    spark_plug_gap=New(spark_plug_gap);
    spark_plug_gap=Job(spark_plug_gap);
}
CarEngine::CarEngine()
{
    water_pump=NULL;
    alternator_belt_tension=NULL;
    engine_coolant=NULL;
    cooling_system=NULL;
    exhaust_system=NULL;
    pcv_system=NULL;
    cylinder_head=NULL;
    manifolds_nuts_bolts=NULL;
    camshaft_timing_belt=NULL;
    distributor_cap=NULL;
    distributor_rotor=NULL;
    cout<<"\t"<<++i<<")Water Pump\n";
    cout<<"\t"<<++i<<")Alternator Belt Tension\n";
    cout<<"\t"<<++i<<")Engine Coolant\n";
    cout<<"\t"<<++i<<")Cooling System\n";
    cout<<"\t"<<++i<<")Exhaust System\n";
    cout<<"\t"<<++i<<")PCV System\n";
    cout<<"\t"<<++i<<")Cylinder Head\n";
    cout<<"\t"<<++i<<")Manifolds Nuts and Bolts\n";
    cout<<"\t"<<++i<<")Camshaft Timing Belt\n";
    cout<<"\t"<<++i<<")Distributor Cap\n";
    cout<<"\t"<<++i<<")Distributor Rotor\n";
}
CarEngine::~CarEngine()
{
    delete[] water_pump;
    delete[] alternator_belt_tension;
    delete[] engine_coolant;
    delete[] cooling_system;
    delete[] exhaust_system;
    delete[] pcv_system;
    delete[] cylinder_head;
    delete[] manifolds_nuts_bolts;
    delete[] camshaft_timing_belt;
    delete[] distributor_cap;
    delete[] distributor_rotor;
}
void CarEngine::Water_Pump()
{
    cout<<"Inspect water pump for proper operation.\n";
    water_pump=New(water_pump);
    water_pump=Job(water_pump);
}
void CarEngine::Alternator_Belt_Tension()
{
    cout<<"Inspect alternator belt tension and adjust if necessary.\n";
    alternator_belt_tension=New(alternator_belt_tension);
    alternator_belt_tension=Job(alternator_belt_tension);
}
void CarEngine::Engine_Coolant()
{
    cout<<"Inspect engine coolant for any leakage and top-up or replace if necessary.\n";
    engine_coolant=New(engine_coolant);
    engine_coolant=Job(engine_coolant);
}
void CarEngine::Cooling_System()
{
    cout<<"Inspect cooling system hoses and connections for any leakage or damage.\n";
    cooling_system=New(cooling_system);
    cooling_system=Job(cooling_system);
}
void CarEngine::Exhaust_System()
{
    cout<<"Inspect exhaust system for any noise or leakage.\n";
    exhaust_system=New(exhaust_system);
    exhaust_system=Job(exhaust_system);
}
void CarEngine::PCV_System()
{
    cout<<"Inspect PCV System hoses,connections and valves for any leakage or damage.\n";
    pcv_system=New(pcv_system);
    pcv_system=Job(pcv_system);
}
void CarEngine::Cylinder_Head()
{
    cout<<"Inspect cylinder head and tighten if necessary.\n";
    cylinder_head=New(cylinder_head);
    cylinder_head=Job(cylinder_head);
}
void CarEngine::Manifolds_Nuts_Bolts()
{
    cout<<"Inspect manifolds nuts and bolts and tighten if necessary.\n";
    manifolds_nuts_bolts=New(manifolds_nuts_bolts);
    manifolds_nuts_bolts=Job(manifolds_nuts_bolts);
}
void CarEngine::Camshaft_Timing_Belt()
{
    cout<<"Inspect camshaft timing belt for proper operation.\n";
    camshaft_timing_belt=New(camshaft_timing_belt);
    camshaft_timing_belt=Job(camshaft_timing_belt);
}
void CarEngine::Distributor_Cap()
{
    cout<<"Inspect distributor cap for any wear or deterioration.\n";
    distributor_cap=New(distributor_cap);
    distributor_cap=Job(distributor_cap);
}
void CarEngine::Distributor_Rotor()
{
    cout<<"Inspect distributor rotor for any wear or deterioration.\n";
    distributor_rotor=New(distributor_rotor);
    distributor_rotor=Job(distributor_rotor);
}
Scooter_Bike_Engine::Scooter_Bike_Engine()
{
    choke=NULL;
    engine_breather=NULL;
    engine_idling_rpm=NULL;
    cout<<"\t"<<++i<<")Choke\n";
    cout<<"\t"<<++i<<")Engine Breather\n";
    cout<<"\t"<<++i<<")Engine Idling RPM\n";
}
Scooter_Bike_Engine::~Scooter_Bike_Engine()
{
    delete[] choke;
    delete[] engine_breather;
    delete[] engine_idling_rpm;
}
void Scooter_Bike_Engine::Choke()
{
    cout<<"Inspect choke for proper operation.\n";
    choke=New(choke);
    choke=Job(choke);
}
void Scooter_Bike_Engine::Engine_Breather()
{
    cout<<"Inspect engine breather hose for any leakage or damage.\n";
    engine_breather=New(engine_breather);
    engine_breather=Job(engine_breather);
}
void Scooter_Bike_Engine::Engine_Idling_RPM()
{
    cout<<"Inspect and set engine idling RPM if necessary.\n";
    engine_idling_rpm=New(engine_idling_rpm);
    engine_idling_rpm=Job(engine_idling_rpm);
}
ScooterEngine::ScooterEngine()
{
    secondary_air_filter=NULL;
    final_drive_oil=NULL;
    cout<<"\t"<<++i<<")Secondary Air Filter\n";
    cout<<"\t"<<++i<<")Final Drive Oil\n";
}
ScooterEngine::~ScooterEngine()
{
    delete[] secondary_air_filter;
    delete[] final_drive_oil;
}
void ScooterEngine::Secondary_Air_Filter()
{
    cout<<"Inspect secondary air filter and clean if necessary.\n";
    secondary_air_filter=New(secondary_air_filter);
    secondary_air_filter=Job(secondary_air_filter);
}
void ScooterEngine::Final_Drive_Oil()
{
    cout<<"\nInspect final drive oil for any leakage and top-up or replace if necessary.\n";
    final_drive_oil=New(final_drive_oil);
    final_drive_oil=Job(final_drive_oil);
}
BikeEngine::BikeEngine()
{
    oil_cooler_pipe=NULL;
    oil_cooler_fin=NULL;
    carburettor_assembly=NULL;
    carburettor_ducts=NULL;
    co_percent=NULL;
    cout<<"\t"<<++i<<")Oil Cooler Pipe\n";
    cout<<"\t"<<++i<<")Oil Cooler Fin\n";
    cout<<"\t"<<++i<<")Carburettor Assembly\n";
    cout<<"\t"<<++i<<")Carburettor Ducts\n";
    cout<<"\t"<<++i<<")CO percent\n";
}
BikeEngine::~BikeEngine()
{
    delete[] oil_cooler_pipe;
    delete[] oil_cooler_fin;
    delete[] carburettor_assembly;
    delete[] carburettor_ducts;
    delete[] co_percent;
}
void BikeEngine::Oil_Cooler_Pipe()
{
    cout<<"Inspect oil cooler pipes for any leakage or damage.\n";
    oil_cooler_pipe=New(oil_cooler_pipe);
    oil_cooler_pipe=Job(oil_cooler_pipe);
}
void BikeEngine::Oil_Cooler_Fin()
{
    cout<<"Inspect oil cooler fins and clean if necessary.\n";
    oil_cooler_fin=New(oil_cooler_fin);
    oil_cooler_fin=Job(oil_cooler_fin);
}
void BikeEngine::Carburettor_Assembly()
{
    cout<<"Inspect carburettor assembly and clean or adjust if necessary.\n";
    carburettor_assembly=New(carburettor_assembly);
    carburettor_assembly=Job(carburettor_assembly);
}
void BikeEngine::Carburettor_Ducts()
{
    cout<<"Inspect carburettor ducts for any leakage or damage.\n";
    carburettor_ducts=New(carburettor_ducts);
    carburettor_ducts=Job(carburettor_ducts);
}
void BikeEngine::CO_percent()
{
    cout<<"Inspect CO% and set at engine idling RPM if necessary.\n";
    co_percent=New(co_percent);
    co_percent=Job(co_percent);
}

Fuel::Fuel()
{
    air_cleaner=NULL;
    lines_connections=NULL;
    tank_cap=NULL;
    cout<<"\nFUEL\n\n";
    cout<<"\t"<<++i<<")Air Cleaner\n";
    cout<<"\t"<<++i<<")Fuel lines and connections\n";
    cout<<"\t"<<++i<<")Fuel Tank Cap\n";
}
Fuel::~Fuel()
{
    delete[] air_cleaner;
    delete[] lines_connections;
    delete[] tank_cap;
}
void Fuel::Air_Cleaner()
{
    cout<<"Inspect air cleaner and clean if necessary.\n";
    air_cleaner=New(air_cleaner);
    air_cleaner=Job(air_cleaner);
}
void Fuel::Lines_Connections()
{
    cout<<"Inspect fuel lines and connections for any leakage.\n";
    lines_connections=New(lines_connections);
    lines_connections=Job(lines_connections);
}
void Fuel::Tank_Cap()
{
    cout<<"Inspect fuel tank cap for any leakage.\n";
    tank_cap=New(tank_cap);
    tank_cap=Job(tank_cap);
}
CarFuel::CarFuel()
{
    accelerator_cable=NULL;
    accelerator_shaft=NULL;
    filter=NULL;
    cout<<"\t"<<++i<<")Accelerator Cable\n";
    cout<<"\t"<<++i<<")Accelerator Shaft\n";
    cout<<"\t"<<++i<<")Fuel Filter\n";
}
CarFuel::~CarFuel()
{
    delete[] accelerator_cable;
    delete[] accelerator_shaft;
    delete[] filter;
}
void CarFuel::Accelerator_Cable()
{
    cout<<"Inspect accelerator cable and lubricate if necessary.\n";
    accelerator_cable=New(accelerator_cable);
    accelerator_cable=Job(accelerator_cable);
}
void CarFuel::Accelerator_Shaft()
{
    cout<<"Inspect accelerator shaft and lubricate if necessary.\n";
    accelerator_shaft=New(accelerator_shaft);
    accelerator_shaft=Job(accelerator_shaft);
}
void CarFuel::Filter()
{
    cout<<"Inspect fuel filter for any leakage.\n";
    filter=New(filter);
    filter=Job(filter);
}
ScooterFuel::ScooterFuel()
{
    throttle_cables=NULL;
    throttle_grip=NULL;
    throttle_play=NULL;
    cout<<"\t"<<++i<<")Throttle Cables\n";
    cout<<"\t"<<++i<<")Throttle Grip\n";
    cout<<"\t"<<++i<<")Throttle Play\n";
}
ScooterFuel::~ScooterFuel()
{
    delete[] throttle_cables;
    delete[] throttle_grip;
    delete[] throttle_play;
}
void ScooterFuel::Throttle_Cables()
{
    cout<<"Inspect throttle cable for proper operation and lubricate ends using grease if necessary.\n";
    throttle_cables=New(throttle_cables);
    throttle_cables=Job(throttle_cables);
}
void ScooterFuel::Throttle_Grip()
{
    cout<<"Inspect throttle grip and lubricate using grease if necessary.\n";
    throttle_grip=New(throttle_grip);
    throttle_grip=Job(throttle_grip);
}
void ScooterFuel::Throttle_Play()
{
    cout<<"Inspect throttle cable play and adjust if necessary.\n";
    throttle_play=New(throttle_play);
    throttle_play=Job(throttle_play);
}
BikeFuel::BikeFuel()
{
    fuel_cock_sediment_bowl=NULL;
    evap_hose=NULL;
    fuel_tank_assembly=NULL;
    noise=NULL;
    jerk=NULL;
    canister=NULL;
    cout<<"\t"<<++i<<")Fuel Cock Sediment Bowl\n";
    cout<<"\t"<<++i<<")EVAP hose\n";
    cout<<"\t"<<++i<<")Fuel Tank Assembly\n";
    cout<<"\t"<<++i<<")Abnormal Noise\n";
    cout<<"\t"<<++i<<")Abnormal Jerk\n";
    cout<<"\t"<<++i<<")Canister\n";
}
BikeFuel::~BikeFuel()
{
    delete[] fuel_cock_sediment_bowl;
    delete[] evap_hose;
    delete[] fuel_tank_assembly;
    delete[] noise;
    delete[] jerk;
    delete[] canister;
}
void BikeFuel::Fuel_Cock_Sediment_Bowl()
{
    cout<<"Inspect fuel cock sediment bowl and clean if necessary.\n";
    fuel_cock_sediment_bowl=New(fuel_cock_sediment_bowl);
    fuel_cock_sediment_bowl=Job(fuel_cock_sediment_bowl);
}
void BikeFuel::EVAP_hose()
{
    cout<<"Inspect EVAP hoses for deterioration or damage and tighten if necessary.\n";
    evap_hose=New(evap_hose);
    evap_hose=Job(evap_hose);
}
void BikeFuel::Fuel_Tank_Assembly()
{
    cout<<"Inspect fuel tank assembly for any sediment deposit and clean if necessary.\n";
    fuel_tank_assembly=New(fuel_tank_assembly);
    fuel_tank_assembly=Job(fuel_tank_assembly);
}
void BikeFuel::Noise()
{
    cout<<"Inspect for any abnormal noise while opening the fuel tank cap.\n";
    noise=New(noise);
    noise=Job(noise);
}
void BikeFuel::Jerk()
{
    cout<<"Inspect for any abnormal jerk while opening the fuel tank cap.\n";
    jerk=New(jerk);
    jerk=Job(jerk);
}
void BikeFuel::Canister()
{
    cout<<"Check canister for any crack or damage.\n";
    canister=New(canister);
    canister=Job(canister);
}

CarClutch::CarClutch()
{
    pedal=NULL;
    slipping=NULL;
    cout<<"\nCLUTCH\n\n";
    cout<<"\t"<<++i<<")Clutch Pedal\n";
    cout<<"\t"<<++i<<")Clutch Slipping\n";
}
CarClutch::~CarClutch()
{
    delete[] pedal;
    delete[] slipping;
}
void CarClutch::Pedal()
{
    cout<<"Inspect clutch pedal play and adjust if necessary.\n";
    pedal=New(pedal);
    pedal=Job(pedal);
}
void CarClutch::Slipping()
{
    cout<<"Inspect clutch slipping for any drag or damage.\n";
    slipping=New(slipping);
    slipping=Job(slipping);
}
BikeClutch::BikeClutch()
{
    clutch_cable=NULL;
    clutch_play=NULL;
    cout<<"\nCLUTCH\n\n";
    cout<<"\t"<<++i<<")Clutch Cable\n";
    cout<<"\t"<<++i<<")Clutch Play\n";
}
BikeClutch::~BikeClutch()
{
    delete[] clutch_cable;
    delete[] clutch_play;
}
void BikeClutch::Clutch_Cable()
{
    cout<<"Inspect clutch cable for proper operation and lubricate ends using grease if necessary.\n";
    clutch_cable=New(clutch_cable);
    clutch_cable=Job(clutch_cable);
}
void BikeClutch::Clutch_Play()
{
    cout<<"Inspect clutch cable play and adjust if necessary.\n";
    clutch_play=New(clutch_play);
    clutch_play=Job(clutch_play);
}

Transmission::Transmission()
{
    gear_shifter_cable=NULL;
    cout<<"\nTRANSMISSION\n\n";
    cout<<"\t"<<++i<<")Gear Shifter Cable\n";
}
Transmission::~Transmission()
{
    delete[] gear_shifter_cable;
}
void Transmission::Gear_Shifter_Cable()
{
    cout<<"Inspect gear shifter cable for proper operation.\n";
    gear_shifter_cable=New(gear_shifter_cable);
    gear_shifter_cable=Job(gear_shifter_cable);
}
CarTransmission::CarTransmission()
{
    transmission_oil=NULL;
    differential_oil=NULL;
    transfer_oil=NULL;
    auto_transmission_fluid=NULL;
    hose_auto_transmission_fluid=NULL;
    drive_shaft_boots=NULL;
    propeller_shaft_play=NULL;
    universal_joints_slack=NULL;
    cout<<"\t"<<++i<<")Transmission Oil\n";
    cout<<"\t"<<++i<<")Differential Oil\n";
    cout<<"\t"<<++i<<")Transfer Oil\n";
    cout<<"\t"<<++i<<")Automatic Transmission Fluid\n";
    cout<<"\t"<<++i<<")Hose Auto Transmission Fluid\n";
    cout<<"\t"<<++i<<")Drive Shaft Boots\n";
    cout<<"\t"<<++i<<")Propeller Shaft Play\n";
    cout<<"\t"<<++i<<")Universal Joints Slack\n";
}
CarTransmission::~CarTransmission()
{
    delete[] transmission_oil;
    delete[] differential_oil;
    delete[] transfer_oil;
    delete[] auto_transmission_fluid;
    delete[] hose_auto_transmission_fluid;
    delete[] drive_shaft_boots;
    delete[] propeller_shaft_play;
    delete[] universal_joints_slack;
}
void CarTransmission::Transmission_Oil()
{
    cout<<"Inspect transmission oil for any leakage and top-up if necessary.\n";
    transmission_oil=New(transmission_oil);
    transmission_oil=Job(transmission_oil);
}
void CarTransmission::Differential_Oil()
{
    cout<<"Inspect differential oil for any leakage and top-up if necessary.\n";
    differential_oil=New(differential_oil);
    differential_oil=Job(differential_oil);
}
void CarTransmission::Transfer_Oil()
{
    cout<<"Inspect transfer oil for any leakage and top-up if necessary.\n";
    transfer_oil=New(transfer_oil);
    transfer_oil=Job(transfer_oil);
}
void CarTransmission::Auto_Transmission_Fluid()
{
    cout<<"Inspect automatic transmission fluid for any leakage and top-up if necessary.\n";
    auto_transmission_fluid=New(auto_transmission_fluid);
    auto_transmission_fluid=Job(auto_transmission_fluid);
}
void CarTransmission::Hose_Auto_Transmission_Fluid()
{
    cout<<"Inspect hose automatic transmission fluid for any leakage and top-up if necessary.\n";
    hose_auto_transmission_fluid=New(hose_auto_transmission_fluid);
    hose_auto_transmission_fluid=Job(hose_auto_transmission_fluid);
}
void CarTransmission::Drive_Shaft_Boots()
{
    cout<<"Inspect drive shaft boots for any damage.\n";
    drive_shaft_boots=New(drive_shaft_boots);
    drive_shaft_boots=Job(drive_shaft_boots);
}
void CarTransmission::Propeller_Shaft_Play()
{
    cout<<"Inspect propeller shaft play and adjust if necessary.\n";
    propeller_shaft_play=New(propeller_shaft_play);
    propeller_shaft_play=Job(propeller_shaft_play);
}
void CarTransmission::Universal_Joints_Slack()
{
    cout<<"Inspect universal joints slack and lubricate if necessary.\n";
    universal_joints_slack=New(universal_joints_slack);
    universal_joints_slack=Job(universal_joints_slack);
}
BikeTransmission::BikeTransmission()
{
    gear_shift_lever=NULL;
    cout<<"\t"<<++i<<")Gear Shift Lever\n";
}
BikeTransmission::~BikeTransmission()
{
    delete[] gear_shift_lever;
}
void BikeTransmission::Gear_Shift_Lever()
{
    cout<<"Lubricate ball joint of gear shift lever using grease if necessary.\n";
    gear_shift_lever=New(gear_shift_lever);
    gear_shift_lever=Job(gear_shift_lever);
}

Brake::Brake()
{
    fluid=NULL;
    pedal_play=NULL;
    hoses_pipes=NULL;
    disc_pads=NULL;
    drum_shoes=NULL;
    brake_light_switch=NULL;
    cout<<"\nBRAKE\n\n";
    cout<<"\t"<<++i<<")Brake Fluid\n";
    cout<<"\t"<<++i<<")Brake Pedal Play\n";
    cout<<"\t"<<++i<<")Brake Hoses and Pipes\n";
    cout<<"\t"<<++i<<")Brake Disc and Pads\n";
    cout<<"\t"<<++i<<")Brake Drum and Shoes\n";
    cout<<"\t"<<++i<<")Brake Light Switch\n";
}
Brake::~Brake()
{
    delete[] fluid;
    delete[] pedal_play;
    delete[] hoses_pipes;
    delete[] disc_pads;
    delete[] drum_shoes;
    delete[] brake_light_switch;
}
void Brake::Fluid()
{
    cout<<"Inspect brake fluid for any leakage and top-up if necessary.\n";
    fluid=New(fluid);
    fluid=Job(fluid);
}
void Brake::Pedal_Play()
{
    cout<<"Inspect and adjust brake pedal play if necessary.\n";
    pedal_play=New(pedal_play);
    pedal_play=Job(pedal_play);
}
void Brake::Hoses_Pipes()
{
    cout<<"Inspect brake hoses and pipes for any leakage or damage.\n";
    hoses_pipes=New(hoses_pipes);
    hoses_pipes=Job(hoses_pipes);
}
void Brake::Disc_Pads()
{
    cout<<"Inspect brake Disc and pad wear.Replace if necessary.\n";
    disc_pads=New(disc_pads);
    disc_pads=Job(disc_pads);
}
void Brake::Drum_Shoes()
{
    cout<<"Inspect brake Drum and shoe wear.Replace if necessary.\n";
    drum_shoes=New(drum_shoes);
    drum_shoes=Job(drum_shoes);
}
void Brake::Brake_Light_Switch()
{
    cout<<"Inspect brake light switch for proper functioning.\n";
    brake_light_switch=New(brake_light_switch);
    brake_light_switch=Job(brake_light_switch);
}
CarBrake::CarBrake()
{
    parking_brake_lever=NULL;
    cout<<"\t"<<++i<<")Parking Brake Lever\n";
}
CarBrake::~CarBrake()
{
    delete[] parking_brake_lever;
}
void CarBrake::Parking_Brake_Lever()
{
    cout<<"Inspect parking brake lever play.Adjust if necessary.\n";
    parking_brake_lever=New(parking_brake_lever);
    parking_brake_lever=Job(parking_brake_lever);
}
ScooterBrake::ScooterBrake()
{
    clutch_shoes_wear=NULL;
    cout<<"\t"<<++i<<")Clutch Shoe Wear\n";
}
ScooterBrake::~ScooterBrake()
{
    delete[] clutch_shoes_wear;
}
void ScooterBrake::Clutch_Shoes_Wear()
{
    cout<<"Inspect clutch shoe wear.Replace if necessary.\n";
    clutch_shoes_wear=New(clutch_shoes_wear);
    clutch_shoes_wear=Job(clutch_shoes_wear);
}
BikeBrake::BikeBrake()
{
    brake_pedal_shaft=NULL;
    bundy_tube_mountings=NULL;
    cout<<"\t"<<++i<<")Brake Pedal Shaft\n";
    cout<<"\t"<<++i<<")Bundy Tube Mountings\n";
}
BikeBrake::~BikeBrake()
{
    delete[] brake_pedal_shaft;
    delete[] bundy_tube_mountings;
}
void BikeBrake::Brake_Pedal_Shaft()
{
    cout<<"Lubricate brake pedal shaft if necessary.\n";
    brake_pedal_shaft=New(brake_pedal_shaft);
    brake_pedal_shaft=Job(brake_pedal_shaft);
}
void BikeBrake::Bundy_Tube_Mountings()
{
    cout<<"Inspect bundy tube mountings for leak.Tighten if necessary.\n";
    bundy_tube_mountings=New(bundy_tube_mountings);
    bundy_tube_mountings=Job(bundy_tube_mountings);
}

Wheel::Wheel()
{
    tyre=NULL;
    wheels=NULL;
    wheel_bearings=NULL;
    wheel_freeness=NULL;
    cout<<"\nWHEEL\n\n";
    cout<<"\t"<<++i<<")Tyre\n";
    cout<<"\t"<<++i<<")Wheels\n";
    cout<<"\t"<<++i<<")Wheel Bearings\n";
    cout<<"\t"<<++i<<")Wheel Freeness\n";
}
Wheel::~Wheel()
{
    delete[] tyre;
    delete[] wheels;
    delete[] wheel_bearings;
    delete[] wheel_freeness;
}
void Wheel::Tyre()
{
    cout<<"Inspect tyre for any abnormal wear or damage and set tyre pressure in cold condition.\n";
    tyre=New(tyre);
    tyre=Job(tyre);
}
void Wheel::Wheels()
{
    cout<<"Inspect wheels for any damage.\n";
    wheels=New(wheels);
    wheels=Job(wheels);
}
void Wheel::Wheel_Bearings()
{
    cout<<"Inspect wheel bearings for any damage and tighten if necessary.\n";
    wheel_bearings=New(wheel_bearings);
    wheel_bearings=Job(wheel_bearings);
}
void Wheel::Wheel_Freeness()
{
    cout<<"Inspect wheel freeness.\n";
    wheel_freeness=New(wheel_freeness);
    wheel_freeness=Job(wheel_freeness);
}
BikeWheel::BikeWheel()
{
    wheel_speed_sensor=NULL;
    wheel_speed_sensor_cable_clamp=NULL;
    toner_ring=NULL;
    toner_ring_teeth_damage=NULL;
    wss_cable=NULL;
    cout<<"\t"<<++i<<")Wheel Speed Sensor\n";
    cout<<"\t"<<++i<<")Wheel Speed Sensor Cable Clamp\n";
    cout<<"\t"<<++i<<")Toner Ring\n";
    cout<<"\t"<<++i<<")Toner Ring Teeth Damage\n";
    cout<<"\t"<<++i<<")WSS Cable\n";
}
BikeWheel::~BikeWheel()
{
    delete[] wheel_speed_sensor;
    delete[] wheel_speed_sensor_cable_clamp;
    delete[] toner_ring;
    delete[] toner_ring_teeth_damage;
    delete[] wss_cable;
}
void BikeWheel::Wheel_Speed_Sensor()
{
    cout<<"Inspect wheel speed sensor and clean if necessary.\n";
    wheel_speed_sensor=New(wheel_speed_sensor);
    wheel_speed_sensor=Job(wheel_speed_sensor);
}
void BikeWheel::Wheel_Speed_Sensor_Cable_Clamp()
{
    cout<<"Inspect wheel speed sensor cable clamp.Fix new if found missing.\n";
    wheel_speed_sensor_cable_clamp=New(wheel_speed_sensor_cable_clamp);
    wheel_speed_sensor_cable_clamp=Job(wheel_speed_sensor_cable_clamp);
}
void BikeWheel::Toner_Ring()
{
    cout<<"Inspect toner ring and clean if necessary.\n";
    toner_ring=New(toner_ring);
    toner_ring=Job(toner_ring);
}
void BikeWheel::Toner_Ring_Teeth_Damage()
{
    cout<<"Inspect toner rings for teeth damage visually.Replace if necessary.\n";
    toner_ring_teeth_damage=New(toner_ring_teeth_damage);
    toner_ring_teeth_damage=Job(toner_ring_teeth_damage);
}
void BikeWheel::WSS_Cable()
{
    cout<<"Inspect wheel speed sensor cable for damage.Clean if necessary.\n";
    wss_cable=New(wss_cable);
    wss_cable=Job(wss_cable);
}

CarSteering::CarSteering()
{
    steering_wheel=NULL;
    rods_arms=NULL;
    power_steering_system=NULL;
    steering_gear_box=NULL;
    tilt_steering=NULL;
    cout<<"\nSTEERING\n\n";
    cout<<"\t"<<++i<<")Steering_Wheel\n";
    cout<<"\t"<<++i<<")Rods and Arms\n";
    cout<<"\t"<<++i<<")Power Steering System\n";
    cout<<"\t"<<++i<<")Steering Gear Box\n";
    cout<<"\t"<<++i<<")Tilt Steering\n";
}
CarSteering::~CarSteering()
{
    delete[] steering_wheel;
    delete[] rods_arms;
    delete[] power_steering_system;
    delete[] steering_gear_box;
    delete[] tilt_steering;
}
void CarSteering::Steering_Wheel()
{
    cout<<"Inspect steering wheel for smooth operation and play.\n";
    steering_wheel=New(steering_wheel);
    steering_wheel=Job(steering_wheel);
}
void CarSteering::Rods_Arms()
{
    cout<<"Inspect Rods and Arms for any damage or wear and tighten if necessary.\n";
    rods_arms=New(rods_arms);
    rods_arms=Job(rods_arms);
}
void CarSteering::Power_Steering_System()
{
    cout<<"Inspect power steering system for proper operation,oil level and leakage.\n";
    power_steering_system=New(power_steering_system);
    power_steering_system=Job(power_steering_system);
}
void CarSteering::Steering_Gear_Box()
{
    cout<<"Inspect steering gear box for any oil leakage.\n";
    steering_gear_box=New(steering_gear_box);
    steering_gear_box=Job(steering_gear_box);
}
void CarSteering::Tilt_Steering()
{
    cout<<"Inspect tilt steering for proper operation.\n";
    tilt_steering=New(tilt_steering);
    tilt_steering=Job(tilt_steering);
}
Scooter_Bike_Steering::Scooter_Bike_Steering()
{
    steering=NULL;
    cout<<"\nSTEERING\n\n";
    cout<<"\t"<<++i<<")Steering\n";
}
Scooter_Bike_Steering::~Scooter_Bike_Steering()
{
    delete[] steering;
}
void Scooter_Bike_Steering::Steering()
{
    cout<<"Inspect steering for smooth operation and play.Adjust if necessary.\n";
    steering=New(steering);
    steering=Job(steering);
}

Electrical::Electrical()
{
    battery_electrolyte=NULL;
    lighting_system=NULL;
    head_light_beam=NULL;
    headlight_indicator_switch=NULL;
    horn=NULL;
    cout<<"\nELECTRICAL\n\n";
    cout<<"\t"<<++i<<")Battery Electrolyte\n";
    cout<<"\t"<<++i<<")Lighting System\n";
    cout<<"\t"<<++i<<")Head Light Beam\n";
    cout<<"\t"<<++i<<")Headlight and Indicator Switch\n";
    cout<<"\t"<<++i<<")Horn\n";
}
Electrical::~Electrical()
{
    delete[] battery_electrolyte;
    delete[] lighting_system;
    delete[] head_light_beam;
    delete[] headlight_indicator_switch;
    delete[] horn;
}
void Electrical::Battery_Electrolyte()
{
    cout<<"Inspect battery electrolyte level and top-up battery cells if necessary.\n";
    battery_electrolyte=New(battery_electrolyte);
    battery_electrolyte=Job(battery_electrolyte);
}
void Electrical::Lighting_System()
{
    cout<<"Check for proper operation of lighting system.\n";
    lighting_system=New(lighting_system);
    lighting_system=Job(lighting_system);
}
void Electrical::Head_Light_Beam()
{
    cout<<"Inspect and adjust head light beam if necessary.\n";
    head_light_beam=New(head_light_beam);
    head_light_beam=Job(head_light_beam);
}
void Electrical::Headlight_Indicator_Switch()
{
    cout<<"Inspect headlight and indicator for proper functioning.\n";
    headlight_indicator_switch=New(headlight_indicator_switch);
    headlight_indicator_switch=Job(headlight_indicator_switch);
}
void Electrical::Horn()
{
    cout<<"Check for proper operation of Horn.\n";
    horn=New(horn);
    horn=Job(horn);
}
CarElectrical::CarElectrical()
{
    wiper=NULL;
    wiring_harness_connections=NULL;
    cout<<"\t"<<++i<<")Wiper\n";
    cout<<"\t"<<++i<<")Wiring Harness Connections\n";
}
CarElectrical::~CarElectrical()
{
    delete[] wiper;
    delete[] wiring_harness_connections;
}
void CarElectrical::Wiper()
{
    cout<<"Check for proper operation of wiper.\n";
    wiper=New(wiper);
    wiper=Job(wiper);
}
void CarElectrical::Wiring_Harness_Connections()
{
    cout<<"Inspect wiring harness connections and tighten if necessary.\n";
    wiring_harness_connections=New(wiring_harness_connections);
    wiring_harness_connections=Job(wiring_harness_connections);
}
ScooterElectrical::ScooterElectrical()
{
    starter_switch=NULL;
    cout<<"\t"<<++i<<")Starter Switch\n";
}
ScooterElectrical::~ScooterElectrical()
{
    delete[] starter_switch;
}
void ScooterElectrical::Starter_Switch()
{
    cout<<"Inspect for proper functioning of starter switch.\n";
    starter_switch=New(starter_switch);
    starter_switch=Job(starter_switch);
}
BikeElectrical::BikeElectrical()
{
    specific_gravity=NULL;
    voltage=NULL;
    cout<<"\t"<<++i<<")Specific Gravity\n";
    cout<<"\t"<<++i<<")Voltage\n";
}
BikeElectrical::~BikeElectrical()
{
    delete[] specific_gravity;
    delete[] voltage;
}
void BikeElectrical::Specific_Gravity()
{
    cout<<"Inspect specific gravity and redelete[]ge if necessary.\n";
    specific_gravity=New(specific_gravity);
    specific_gravity=Job(specific_gravity);
}
void BikeElectrical::Voltage()
{
    cout<<"Inspect voltage and redelete[]ge if necessary.\n";
    voltage=New(voltage);
    voltage=Job(voltage);
}

Body::Body()
{
    nuts_bolts_fasteners=NULL;
    cout<<"\nBODY\n\n";
    cout<<"\t"<<++i<<")All Nuts,Bolts and Fasteners\n";
}
Body::~Body()
{
    delete[] nuts_bolts_fasteners;
}
void Body::Nuts_Bolts_Fasteners()
{
    cout<<"Inspect all nuts,bolts and fasteners and tighten if necessary.\n";
    nuts_bolts_fasteners=New(nuts_bolts_fasteners);
    nuts_bolts_fasteners=Job(nuts_bolts_fasteners);
}
CarBody::CarBody()
{
    latch=NULL;
    central_locking=NULL;
    seat_belt=NULL;
    seat_latch=NULL;
    seat_lever=NULL;
    seat_knob=NULL;
    cout<<"\t"<<++i<<")Latches\n";
    cout<<"\t"<<++i<<")Central Locking\n";
    cout<<"\t"<<++i<<")Seat Belt\n";
    cout<<"\t"<<++i<<")Seat Latch\n";
    cout<<"\t"<<++i<<")Seat Lever\n";
    cout<<"\t"<<++i<<")Seat Knob\n";
}
CarBody::~CarBody()
{
    delete[] latch;
    delete[] central_locking;
    delete[] seat_belt;
    delete[] seat_latch;
    delete[] seat_lever;
    delete[] seat_knob;
}
void CarBody::Latch()
{
    cout<<"Check operation of all latches and lubricate if necessary.\n";
    latch=New(latch);
    latch=Job(latch);
}
void CarBody::Central_Locking()
{
    cout<<"Check operation of central locking and lubricate if necessary.\n";
    central_locking=New(central_locking);
    central_locking=Job(central_locking);
}
void CarBody::Seat_Belt()
{
    cout<<"Check seat belt for proper operation.\n";
    seat_belt=New(seat_belt);
    seat_belt=Job(seat_belt);
}
void CarBody::Seat_Latch()
{
    cout<<"Check seat latch for proper operation.\n";
    seat_latch=New(seat_latch);
    seat_latch=Job(seat_latch);
}
void CarBody::Seat_Lever()
{
    cout<<"Check seat lever for proper operation.\n";
    seat_lever=New(seat_lever);
    seat_lever=Job(seat_lever);
}
void CarBody::Seat_Knob()
{
    cout<<"Check seat knob for proper operation.\n";
    seat_knob=New(seat_knob);
    seat_knob=Job(seat_knob);
}
Scooter_Bike_Body::Scooter_Bike_Body()
{
    center_side_stand=NULL;
    cout<<"\t"<<++i<<")Center and Side Stand\n";
}
Scooter_Bike_Body::~Scooter_Bike_Body()
{
    delete[] center_side_stand;
}
void Scooter_Bike_Body::Center_Side_Stand()
{
    cout<<"Inspect center and side stand pivot and lubricate if necessary .\n";
    center_side_stand=New(center_side_stand);
    center_side_stand=Job(center_side_stand);
}
ScooterBody::ScooterBody()
{
    drive_belt=NULL;
    drive_belt_case=NULL;
    cout<<"\t"<<++i<<")Drive Belt\n";
    cout<<"\t"<<++i<<")Drive Belt Case\n";
}
ScooterBody::~ScooterBody()
{
    delete[] drive_belt;
    delete[] drive_belt_case;
}
void ScooterBody::Drive_Belt()
{
    cout<<"Inspect drive belt and clean or lubricate if necessary.\n";
    drive_belt=New(drive_belt);
    drive_belt=Job(drive_belt);
}
void ScooterBody::Drive_Belt_Case()
{
    cout<<"Inspect drive belt case and clean if necessary.\n";
    drive_belt_case=New(drive_belt_case);
    drive_belt_case=Job(drive_belt_case);
}
BikeBody::BikeBody()
{
    drive_chain=NULL;
    drive_chain_play=NULL;
    hose_connection=NULL;
    hecu=NULL;
    cout<<"\t"<<++i<<")Drive Chain\n";
    cout<<"\t"<<++i<<")Drive Chain Play\n";
    cout<<"\t"<<++i<<")Hose Connection\n";
    cout<<"\t"<<++i<<")HECU\n";
}
BikeBody::~BikeBody()
{
    delete[] drive_chain;
    delete[] drive_chain_play;
    delete[] hose_connection;
    delete[] hecu;
}
void BikeBody::Drive_Chain()
{
    cout<<"Inspect drive chain and clean or lubricate if necessary.\n";
    drive_chain=New(drive_chain);
    drive_chain=Job(drive_chain);
}
void BikeBody::Drive_Chain_Play()
{
    cout<<"Inspect chain play and adjust if necessary.\n";
    drive_chain_play=New(drive_chain_play);
    drive_chain_play=Job(drive_chain_play);
}
void BikeBody::Hose_Connection()
{
    cout<<"Inspect all hose connections and tighten if necessary.\n";
    hose_connection=New(hose_connection);
    hose_connection=Job(hose_connection);
}
void BikeBody::HECU()
{
    cout<<"Inspect HECU mounting cushions for damage.\n";
    hecu=New(hecu);
    hecu=Job(hecu);
}

CarAirCondition::CarAirCondition()
{
    drive_belt=NULL;
    receiver_drier_bubbles=NULL;
    recirc_flap=NULL;
    hose_joints=NULL;
    compressor_mounting_bolts=NULL;
    condenser=NULL;
    cout<<"\nAIR CONDITION\n\n";
    cout<<"\t"<<++i<<")Drive Belt\n";
    cout<<"\t"<<++i<<")Receiver Drier Bubbles\n";
    cout<<"\t"<<++i<<")Recirc_Flap\n";
    cout<<"\t"<<++i<<")Hose Joints\n";
    cout<<"\t"<<++i<<")Compressor Mounting Bolts\n";
    cout<<"\t"<<++i<<")Condenser\n";
}
CarAirCondition::~CarAirCondition()
{
    delete[] drive_belt;
    delete[] receiver_drier_bubbles;
    delete[] recirc_flap;
    delete[] hose_joints;
    delete[] compressor_mounting_bolts;
    delete[] condenser;
}
void CarAirCondition::Drive_Belt()
{
    cout<<"Inspect drive belt tension and adjust if necessary.\n";
    drive_belt=New(drive_belt);
    drive_belt=Job(drive_belt);
}
void CarAirCondition::Receiver_Drier_Bubbles()
{
    cout<<"Inspect receiver drier bubbles for proper functioning.\n";
    receiver_drier_bubbles=New(receiver_drier_bubbles);
    receiver_drier_bubbles=Job(receiver_drier_bubbles);
}
void CarAirCondition::Recirc_Flap()
{
    cout<<"Inspect recirc flap for proper functioning.\n";
    recirc_flap=New(recirc_flap);
    recirc_flap=Job(recirc_flap);
}
void CarAirCondition::Hose_Joints()
{
    cout<<"Inspect all hose joints and tighten if necessary.\n";
    hose_joints=New(hose_joints);
    hose_joints=Job(hose_joints);
}
void CarAirCondition::Compressor_Mounting_Bolts()
{
    cout<<"Inspect all compressor mounting bolts and tighten if necessary.\n";
    compressor_mounting_bolts=New(compressor_mounting_bolts);
    compressor_mounting_bolts=Job(compressor_mounting_bolts);
}
void CarAirCondition::Condenser()
{
    cout<<"Inspect Condenser and clean with low pressure water if necessary.\n";
    condenser=New(condenser);
    condenser=Job(condenser);
}

ScooterRoadTest::ScooterRoadTest()
{
    brake=NULL;
    speedometer=NULL;
    noise=NULL;
    cout<<"\nROAD TEST\n\n";
    cout<<"\t"<<++i<<")Operation of Brakes\n";
    cout<<"\t"<<++i<<")Operation of Speedometer\n";
    cout<<"\t"<<++i<<")Body Noise\n";
}
ScooterRoadTest::~ScooterRoadTest()
{
    delete[] brake;
    delete[] speedometer;
    delete[] noise;
}
void ScooterRoadTest::Brake()
{
    cout<<"Test drive the vehicle and ascertain smooth functioning of brakes.\n";
    brake=New(brake);
    brake=Job(brake);
}
void ScooterRoadTest::Speedometer()
{
    cout<<"Test drive the vehicle and ascertain smooth functioning of speedometer.\n";
    speedometer=New(speedometer);
    speedometer=Job(speedometer);
}
void ScooterRoadTest::Noise()
{
    cout<<"Test drive the vehicle and check for any abnormal noise.\n";
    noise=New(noise);
    noise=Job(noise);
}

Car_Bike_RoadTest::Car_Bike_RoadTest()
{
    clutch=NULL;
    gear_shifting=NULL;
    cout<<"\t"<<++i<<")Operation of Clutch\n";
    cout<<"\t"<<++i<<")Operation of Gear Shifting\n";
}
Car_Bike_RoadTest::~Car_Bike_RoadTest()
{
    delete[] clutch;
    delete[] gear_shifting;
}
void Car_Bike_RoadTest::Clutch()
{
    cout<<"Test drive the vehicle and ascertain smooth functioning of clutch.\n";
    clutch=New(clutch);
    clutch=Job(clutch);
}
void Car_Bike_RoadTest::Gear_Shifting()
{
    cout<<"Test drive the vehicle and check for any problem in gear shifting.\n";
    gear_shifting=New(gear_shifting);
    gear_shifting=Job(gear_shifting);
}


