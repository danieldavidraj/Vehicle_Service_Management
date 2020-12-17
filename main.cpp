#include <iostream>
#include<fstream>
#include<limits>
#include<sys/stat.h>
#include"package.h"
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
using namespace std;

int cash[3]={0};

void Validate() throw(int)         //exception handling
{
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter a integer value\n";
        throw 1;
    }
}

bool Warning1()
{
    cout<<"WARNING!No items are checked!\n";
 l7:cout<<"1)Terminate Program\n";
    cout<<"2)Enter Details\n";
    int n;
    cin>>n;
    try
    {
        Validate();
    }
    catch(int x)
    {
        goto l7;
    }
    if(n==1)
    {
        exit(0);
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        cout<<"Invalid Entry\n";
        goto l7;
    }
}

int main()
{
    void login();
    login();
    ofstream fout;
    int n;
    cout<<"\t\tV E H I C L E   S E R V I C E   M A N A G E M E N T\n\n";
 l5:cout<<"Enter Invoice Number.....";
    cin>>n;
    int inv=n;
    try
    {
        Validate();
    }
    catch(int x)
    {
        goto l5;
    }
    string filename=to_string(n);                //only works in c++11
    filename="Invoice "+filename+".txt";
    struct stat buffer;
    if( stat(filename.c_str(),&buffer)==0 )
    {
     l6:cout<<"Invoice already exists with the same number\n";
        cout<<"1)Truncate the invoice\n";
        cout<<"2)Use another number\n";
        cin>>n;
        try
        {
            Validate();
        }
        catch(int x)
        {
            goto l6;
        }
        if(n==1)
        {
            fout.open(filename.c_str(),ios::trunc);
        }
        else if(n==2)
        {
            goto l5;
        }
        else
        {
            cout<<"Invalid Entry\n";
            goto l6;
        }
    }
    else
    {
        fout.open(filename.c_str());
    }
    try
    {
        if( fout.is_open() )
        {
            throw 1;
        }
        else
        {
            cout<<"Error opening file\n";
        }
    }
    catch(int x)
    {
        filename.erase(9);
        fout<<filename<<":\n\n";
        fout<<"\t\t\t\t\tV E H I C L E   S E R V I C E    M A N A G E M E N T\n\n";
        cout<<"1)Car Service\n\n2)Scooter Service\n\n3)Bike Service\n\n";
        l1:cout<<"Vehicle:";
        cin>>n;
        try
        {
            Validate();
        }
        catch(int x)
        {
            goto l1;
        }
        if(n==1)
        {
            Carc cust1;
            cust1.setName();
            fout<<"Car Service :-\n\n";
            Car car;
            cout<<"\t80)Exit\n";
            l2:cout<<"Item:";
            cin>>n;
            try
            {
                Validate();
            }
            catch(int x)
            {
                goto l2;
            }
            switch(n)
            {
                case 1:car.suspension.Shock_Absorbers();cash[0]+=5;goto l2;
                case 2:car.suspension.Arms();cash[0]+=5;goto l2;
                case 3:car.suspension.Knuckle();cash[0]+=5;goto l2;
                case 4:car.suspension.Rear_Spring();cash[0]+=5;goto l2;
                case 5:car.suspension.Nuts_Bolts();cash[0]+=5;goto l2;

                case 6:car.car_engine.Engine_Oil();cash[0]+=10;goto l2;
                case 7:car.car_engine.Oil_Filter();cash[0]+=10;goto l2;
                case 8:car.car_engine.Valve_Clearance();cash[0]+=10;goto l2;
                case 9:car.car_engine.Spark_Plug();cash[0]+=10;goto l2;
                case 10:car.car_engine.Spark_Plug_Gap();cash[0]+=10;goto l2;
                case 11:car.car_engine.Water_Pump();cash[0]+=10;goto l2;
                case 12:car.car_engine.Alternator_Belt_Tension();cash[0]+=10;goto l2;
                case 13:car.car_engine.Engine_Coolant();cash[0]+=10;goto l2;
                case 14:car.car_engine.Cooling_System();cash[0]+=10;goto l2;
                case 15:car.car_engine.Exhaust_System();cash[0]+=10;goto l2;
                case 16:car.car_engine.PCV_System();cash[0]+=10;goto l2;
                case 17:car.car_engine.Cylinder_Head();cash[0]+=10;goto l2;
                case 18:car.car_engine.Manifolds_Nuts_Bolts();cash[0]+=10;goto l2;
                case 19:car.car_engine.Camshaft_Timing_Belt();cash[0]+=10;goto l2;
                case 20:car.car_engine.Distributor_Cap();cash[0]+=10;goto l2;
                case 21:car.car_engine.Distributor_Rotor();cash[0]+=10;goto l2;

                case 22:car.car_fuel.Air_Cleaner();cash[0]+=12;goto l2;
                case 23:car.car_fuel.Lines_Connections();cash[0]+=12;goto l2;
                case 24:car.car_fuel.Tank_Cap();cash[0]+=12;goto l2;
                case 25:car.car_fuel.Accelerator_Cable();cash[0]+=12;goto l2;
                case 26:car.car_fuel.Accelerator_Shaft();cash[0]+=12;goto l2;
                case 27:car.car_fuel.Filter();cash[0]+=12;goto l2;

                case 28:car.car_clutch.Pedal();cash[0]+=12;goto l2;
                case 29:car.car_clutch.Slipping();cash[0]+=12;goto l2;

                case 30:car.car_transmission.Gear_Shifter_Cable();cash[0]+=20;goto l2;
                case 31:car.car_transmission.Transmission_Oil();cash[0]+=20;goto l2;
                case 32:car.car_transmission.Differential_Oil();cash[0]+=20;goto l2;
                case 33:car.car_transmission.Transfer_Oil();cash[0]+=20;goto l2;
                case 34:car.car_transmission.Auto_Transmission_Fluid();cash[0]+=20;goto l2;
                case 35:car.car_transmission.Hose_Auto_Transmission_Fluid();cash[0]+=20;goto l2;
                case 36:car.car_transmission.Drive_Shaft_Boots();cash[0]+=20;goto l2;
                case 37:car.car_transmission.Propeller_Shaft_Play();cash[0]+=20;goto l2;
                case 38:car.car_transmission.Universal_Joints_Slack();cash[0]+=20;goto l2;

                case 39:car.car_brake.Fluid();cash[0]+=20;goto l2;
                case 40:car.car_brake.Pedal_Play();cash[0]+=20;goto l2;
                case 41:car.car_brake.Hoses_Pipes();cash[0]+=20;goto l2;
                case 42:car.car_brake.Disc_Pads();cash[0]+=20;goto l2;
                case 43:car.car_brake.Drum_Shoes();cash[0]+=20;goto l2;
                case 44:car.car_brake.Brake_Light_Switch();cash[0]+=20;goto l2;
                case 45:car.car_brake.Parking_Brake_Lever();cash[0]+=20;goto l2;

                case 46:car.car_wheel.Tyre();cash[0]+=20;goto l2;
                case 47:car.car_wheel.Wheels();cash[0]+=20;goto l2;
                case 48:car.car_wheel.Wheel_Bearings();cash[0]+=20;goto l2;
                case 49:car.car_wheel.Wheel_Freeness();cash[0]+=20;goto l2;

                case 50:car.car_steering.Steering_Wheel();cash[0]+=21;goto l2;
                case 51:car.car_steering.Rods_Arms();cash[0]+=21;goto l2;
                case 52:car.car_steering.Power_Steering_System();cash[0]+=21;goto l2;
                case 53:car.car_steering.Steering_Gear_Box();cash[0]+=21;goto l2;
                case 54:car.car_steering.Tilt_Steering();cash[0]+=21;goto l2;

                case 55:car.car_electrical.Battery_Electrolyte();cash[0]+=21;goto l2;
                case 56:car.car_electrical.Lighting_System();cash[0]+=21;goto l2;
                case 57:car.car_electrical.Head_Light_Beam();cash[0]+=21;goto l2;
                case 58:car.car_electrical.Headlight_Indicator_Switch();cash[0]+=21;goto l2;
                case 59:car.car_electrical.Horn();cash[0]+=21;goto l2;
                case 60:car.car_electrical.Wiper();cash[0]+=21;goto l2;
                case 61:car.car_electrical.Wiring_Harness_Connections();cash[0]+=21;goto l2;

                case 62:car.car_body.Nuts_Bolts_Fasteners();cash[0]+=25;goto l2;
                case 63:car.car_body.Latch();cash[0]+=25;goto l2;
                case 64:car.car_body.Central_Locking();cash[0]+=25;goto l2;
                case 65:car.car_body.Seat_Belt();cash[0]+=25;goto l2;
                case 66:car.car_body.Seat_Latch();cash[0]+=25;goto l2;
                case 67:car.car_body.Seat_Lever();cash[0]+=25;goto l2;
                case 68:car.car_body.Seat_Knob();cash[0]+=25;goto l2;

                case 69:car.car_aircondition.Drive_Belt();cash[0]+=25;goto l2;
                case 70:car.car_aircondition.Receiver_Drier_Bubbles();cash[0]+=25;goto l2;
                case 71:car.car_aircondition.Recirc_Flap();cash[0]+=25;goto l2;
                case 72:car.car_aircondition.Hose_Joints();cash[0]+=25;goto l2;
                case 73:car.car_aircondition.Compressor_Mounting_Bolts();cash[0]+=25;goto l2;
                case 74:car.car_aircondition.Condenser();cash[0]+=25;goto l2;

                case 75:car.car_roadtest.Brake();cash[0]+=25;goto l2;
                case 76:car.car_roadtest.Speedometer();cash[0]+=25;goto l2;
                case 77:car.car_roadtest.Noise();cash[0]+=25;goto l2;
                case 78:car.car_roadtest.Clutch();cash[0]+=25;goto l2;
                case 79:car.car_roadtest.Gear_Shifting();cash[0]+=25;goto l2;

                case 80:if(Vehicle::count==0)
                        {
                            if(Warning1()==1)
                            {
                                goto l2;
                            }
                        }
                        else
                        {
                            fout<<car;break;
                        }
                default:cout<<"Invalid Entry\n";goto l2;
            }
            cust1.price(inv,cash[0],fout);
        }
        else if(n==2)
        {
            Scooterc cust2;
            cust2.setName();
            fout<<"Scooter Service :-\n\n";
            Scooter scooter;
            cout<<"\t47)Exit\n";
            l3:cout<<"Item:";
            cin>>n;
            try
            {
                Validate();
            }
            catch(int x)
            {
                goto l3;
            }
            switch(n)
            {
                case 1:scooter.suspension.Shock_Absorbers();cash[1]+=2;goto l3;
                case 2:scooter.suspension.Arms();cash[1]+=2;goto l3;
                case 3:scooter.suspension.Knuckle();cash[1]+=2;goto l3;
                case 4:scooter.suspension.Rear_Spring();cash[1]+=2;goto l3;
                case 5:scooter.suspension.Nuts_Bolts();cash[1]+=2;goto l3;

                case 6:scooter.scooter_engine.Engine_Oil();cash[1]+=2;goto l3;
                case 7:scooter.scooter_engine.Oil_Filter();cash[1]+=2;goto l3;
                case 8:scooter.scooter_engine.Valve_Clearance();cash[1]+=2;goto l3;
                case 9:scooter.scooter_engine.Spark_Plug();cash[1]+=2;goto l3;
                case 10:scooter.scooter_engine.Spark_Plug_Gap();cash[1]+=2;goto l3;
                case 11:scooter.scooter_engine.Choke();cash[1]+=5;goto l3;
                case 12:scooter.scooter_engine.Engine_Breather();cash[1]+=5;goto l3;
                case 13:scooter.scooter_engine.Engine_Idling_RPM();cash[1]+=5;goto l3;
                case 14:scooter.scooter_engine.Secondary_Air_Filter();cash[1]+=5;goto l3;
                case 15:scooter.scooter_engine.Final_Drive_Oil();cash[1]+=5;goto l3;

                case 16:scooter.scooter_fuel.Air_Cleaner();cash[1]+=5;goto l3;
                case 17:scooter.scooter_fuel.Lines_Connections();cash[1]+=5;goto l3;
                case 18:scooter.scooter_fuel.Tank_Cap();cash[1]+=5;goto l3;
                case 19:scooter.scooter_fuel.Throttle_Cables();cash[1]+=5;goto l3;
                case 20:scooter.scooter_fuel.Throttle_Grip();cash[1]+=10;goto l3;
                case 21:scooter.scooter_fuel.Throttle_Play();cash[1]+=10;goto l3;

                case 22:scooter.scooter_brake.Fluid();cash[1]+=10;goto l3;
                case 23:scooter.scooter_brake.Pedal_Play();cash[1]+=10;goto l3;
                case 24:scooter.scooter_brake.Hoses_Pipes();cash[1]+=10;goto l3;
                case 25:scooter.scooter_brake.Disc_Pads();cash[1]+=10;goto l3;
                case 26:scooter.scooter_brake.Drum_Shoes();cash[1]+=10;goto l3;
                case 27:scooter.scooter_brake.Brake_Light_Switch();cash[1]+=10;goto l3;
                case 28:scooter.scooter_brake.Clutch_Shoes_Wear();cash[1]+=10;goto l3;

                case 29:scooter.scooter_wheel.Tyre();cash[1]+=10;goto l3;
                case 30:scooter.scooter_wheel.Wheels();cash[1]+=10;goto l3;
                case 31:scooter.scooter_wheel.Wheel_Bearings();cash[1]+=10;goto l3;
                case 32:scooter.scooter_wheel.Wheel_Freeness();cash[1]+=10;goto l3;

                case 33:scooter.scooter_steering.Steering();cash[1]+=10;goto l3;

                case 34:scooter.scooter_electrical.Battery_Electrolyte();cash[1]+=15;goto l3;
                case 35:scooter.scooter_electrical.Lighting_System();cash[1]+=15;goto l3;
                case 36:scooter.scooter_electrical.Head_Light_Beam();cash[1]+=15;goto l3;
                case 37:scooter.scooter_electrical.Headlight_Indicator_Switch();cash[1]+=15;goto l3;
                case 38:scooter.scooter_electrical.Horn();cash[1]+=15;goto l3;
                case 39:scooter.scooter_electrical.Starter_Switch();cash[1]+=15;goto l3;

                case 40:scooter.scooter_body.Nuts_Bolts_Fasteners();cash[1]+=15;goto l3;
                case 41:scooter.scooter_body.Center_Side_Stand();cash[1]+=15;goto l3;
                case 42:scooter.scooter_body.Drive_Belt();cash[1]+=20;goto l3;
                case 43:scooter.scooter_body.Drive_Belt_Case();cash[1]+=20;goto l3;

                case 44:scooter.scooter_roadtest.Brake();cash[1]+=20;goto l3;
                case 45:scooter.scooter_roadtest.Speedometer();cash[1]+=20;goto l3;
                case 46:scooter.scooter_roadtest.Noise();cash[1]+=20;goto l3;

                case 47:if(Vehicle::count==0)
                        {
                            if(Warning1()==1)
                            {
                                goto l3;
                            }
                        }
                        else
                        {
                            fout<<scooter;break;
                        }
                default:cout<<"Invalid Entry\n";goto l3;
            }
            cust2.price(inv,cash[1],fout);
        }
        else if(n==3)
        {
            Bikec cust3;
            cust3.setName();
            fout<<"Bike Service :-\n\n";
            Bike bike;
            cout<<"\t72)Exit\n";
            l4:cout<<"Item:";
            cin>>n;
            try
            {
                Validate();
            }
            catch(int x)
            {
                goto l4;
            }
            switch(n)
            {
                case 1:bike.suspension.Shock_Absorbers();cash[2]+=4;goto l4;
                case 2:bike.suspension.Arms();cash[2]+=4;goto l4;
                case 3:bike.suspension.Knuckle();cash[2]+=4;goto l4;
                case 4:bike.suspension.Rear_Spring();cash[2]+=4;goto l4;
                case 5:bike.suspension.Nuts_Bolts();cash[2]+=4;goto l4;

                case 6:bike.bike_engine.Engine_Oil();cash[2]+=4;goto l4;
                case 7:bike.bike_engine.Oil_Filter();cash[2]+=4;goto l4;
                case 8:bike.bike_engine.Valve_Clearance();cash[2]+=4;goto l4;
                case 9:bike.bike_engine.Spark_Plug();cash[2]+=4;goto l4;
                case 10:bike.bike_engine.Spark_Plug_Gap();cash[2]+=4;goto l4;
                case 11:bike.bike_engine.Choke();cash[2]+=4;goto l4;
                case 12:bike.bike_engine.Engine_Breather();cash[2]+=6;goto l4;
                case 13:bike.bike_engine.Engine_Idling_RPM();cash[2]+=6;goto l4;
                case 14:bike.bike_engine.Oil_Cooler_Pipe();cash[2]+=6;goto l4;
                case 15:bike.bike_engine.Oil_Cooler_Fin();cash[2]+=6;goto l4;
                case 16:bike.bike_engine.Carburettor_Assembly();cash[2]+=6;goto l4;
                case 17:bike.bike_engine.Carburettor_Ducts();cash[2]+=6;goto l4;
                case 18:bike.bike_engine.CO_percent();cash[2]+=6;goto l4;

                case 19:bike.bike_fuel.Air_Cleaner();cash[2]+=6;goto l4;
                case 20:bike.bike_fuel.Lines_Connections();cash[2]+=6;goto l4;
                case 21:bike.bike_fuel.Tank_Cap();cash[2]+=6;goto l4;
                case 22:bike.bike_fuel.Throttle_Cables();cash[2]+=6;
                case 23:bike.bike_fuel.Throttle_Grip();cash[2]+=6;
                case 24:bike.bike_fuel.Throttle_Play();cash[2]+=6;
                case 25:bike.bike_fuel.Fuel_Cock_Sediment_Bowl();cash[2]+=6;goto l4;
                case 26:bike.bike_fuel.EVAP_hose();cash[2]+=6;goto l4;
                case 27:bike.bike_fuel.Fuel_Tank_Assembly();cash[2]+=6;goto l4;
                case 28:bike.bike_fuel.Noise();cash[2]+=6;goto l4;
                case 29:bike.bike_fuel.Jerk();cash[2]+=6;goto l4;
                case 30:bike.bike_fuel.Canister();cash[2]+=6;goto l4;

                case 31:bike.bike_clutch.Clutch_Cable();cash[2]+=6;goto l4;
                case 32:bike.bike_clutch.Clutch_Play();cash[2]+=6;goto l4;

                case 33:bike.bike_transmission.Gear_Shifter_Cable();cash[2]+=10;goto l4;
                case 34:bike.bike_transmission.Gear_Shift_Lever();cash[2]+=10;goto l4;

                case 35:bike.bike_brake.Fluid();cash[2]+=10;goto l4;
                case 36:bike.bike_brake.Pedal_Play();cash[2]+=10;goto l4;
                case 37:bike.bike_brake.Hoses_Pipes();cash[2]+=10;goto l4;
                case 38:bike.bike_brake.Disc_Pads();cash[2]+=10;goto l4;
                case 39:bike.bike_brake.Drum_Shoes();cash[2]+=10;goto l4;
                case 40:bike.bike_brake.Brake_Light_Switch();cash[2]+=10;goto l4;
                case 41:bike.bike_brake.Brake_Pedal_Shaft();cash[2]+=10;goto l4;
                case 42:bike.bike_brake.Bundy_Tube_Mountings();cash[2]+=10;goto l4;

                case 43:bike.bike_wheel.Tyre();cash[2]+=15;goto l4;
                case 44:bike.bike_wheel.Wheels();cash[2]+=15;goto l4;
                case 45:bike.bike_wheel.Wheel_Bearings();cash[2]+=15;goto l4;
                case 46:bike.bike_wheel.Wheel_Freeness();cash[2]+=15;goto l4;
                case 47:bike.bike_wheel.Wheel_Speed_Sensor();cash[2]+=15;goto l4;
                case 48:bike.bike_wheel.Wheel_Speed_Sensor_Cable_Clamp();cash[2]+=15;goto l4;
                case 49:bike.bike_wheel.Toner_Ring();cash[2]+=15;goto l4;
                case 50:bike.bike_wheel.Toner_Ring_Teeth_Damage();cash[2]+=15;goto l4;
                case 51:bike.bike_wheel.WSS_Cable();cash[2]+=15;goto l4;

                case 52:bike.bike_steering.Steering();cash[2]+=15;goto l4;

                case 53:bike.bike_electrical.Battery_Electrolyte();cash[2]+=15;goto l4;
                case 54:bike.bike_electrical.Lighting_System();cash[2]+=15;goto l4;
                case 55:bike.bike_electrical.Head_Light_Beam();cash[2]+=15;goto l4;
                case 56:bike.bike_electrical.Headlight_Indicator_Switch();cash[2]+=15;goto l4;
                case 57:bike.bike_electrical.Horn();cash[2]+=15;goto l4;
                case 58:bike.bike_electrical.Starter_Switch();cash[2]+=15;goto l4;
                case 59:bike.bike_electrical.Specific_Gravity();cash[2]+=15;goto l4;
                case 60:bike.bike_electrical.Voltage();cash[2]+=15;goto l4;

                case 61:bike.bike_body.Nuts_Bolts_Fasteners();cash[2]+=20;goto l4;
                case 62:bike.bike_body.Center_Side_Stand();cash[2]+=20;goto l4;
                case 63:bike.bike_body.Drive_Chain();cash[2]+=20;goto l4;
                case 64:bike.bike_body.Drive_Chain_Play();cash[2]+=20;goto l4;
                case 65:bike.bike_body.Hose_Connection();cash[2]+=20;goto l4;
                case 66:bike.bike_body.HECU();cash[2]+=20;goto l4;

                case 67:bike.bike_roadtest.Brake();cash[2]+=20;goto l4;
                case 68:bike.bike_roadtest.Speedometer();cash[2]+=20;goto l4;
                case 69:bike.bike_roadtest.Noise();cash[2]+=20;goto l4;
                case 70:bike.bike_roadtest.Clutch();cash[2]+=20;goto l4;
                case 71:bike.bike_roadtest.Gear_Shifting();cash[2]+=25;goto l4;

                case 72:if(Vehicle::count==0)
                        {
                            if(Warning1()==1)
                            {
                                goto l4;
                            }
                        }
                        else
                        {
                            fout<<bike;break;
                        }
                default:cout<<"Invalid Entry\n";goto l4;
            }
            cust3.price(inv,cash[2],fout);
        }
        else
        {
            cout<<"Invalid Entry"<<endl;
            goto l1;
        }
        fout.close();
    }
}
void login()
{
    string password ="";
    char ch;
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tV E H I C L E    S E R V I C E   M A N A G E M E N T \n\n";
    cout<<"\t\t\t\t\t------------------------------";
    cout<<"\n\t\t\t\t\t\t     LOGIN \n";
    cout<<"\t\t\t\t\t------------------------------\n\n";
    cout << "\t\t\t\t\tEnter Password:";
    ch = _getch();
    int i=0;
    while(ch != 13)//character 13(12 word password) is enter
    {
        if(ch==8 && i!=0)     //to avoid backspacing other data rather than the password
        {
            cout<<"\b \b";
            password.pop_back();
            i--;
        }
        else if(ch!=8)
        {
            password.push_back(ch);
            cout <<'*';
            i++;
        }
        ch = _getch();
    }
    if(password == "daniel")
    {
        cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
        system("PAUSE");
        system ("CLS");
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}

void Customer::price(int inv,int cash,ostream& fout)
{
        int x=0;
        if(vehicleType=="Car" )
        x=6000;
        else if(vehicleType=="Scooter")
        x=2500;
        else
        x=4000;

        cout << "\n\t\t                       Vehicle Service - Customer Invoice                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| GST IN:"<<"----------------------------|"<<setw(10)<<"33CEXHJI90IOS"<<"   |"<<endl;
        cout << "\t\t	| Invoice No. :"<<"----------------------|"<<setw(10)<<inv<<"      |"<<endl;
        cout << "\t\t	| Customer Name:"<<"---------------------|"<<setw(10)<<getName()<<"      |"<<endl;
        cout << "\t\t	| Vehicle Type:"<<"----------------------|"<<setw(10)<<vehicleType<<"      |"<<endl;
        cout << "\t\t\t| Items Checked:"<<"---------------------|"<<setw(10)<<Vehicle::count<<"      |"<<endl;
        cout << "\t\t	| Your Initial Charge is :"<<"-----------|"<<setw(10)<<x<<"      |"<<endl;
        cout << "\t\t	| Checkup Charges :"<<"------------------|"<<setw(10)<<cash<<"      |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| Total Service Charge is :"<<"----------|"<<setw(10)<<(cash+x)<<"      |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
        cout << "\t\t	 require an authorised signture #"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
        cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;

        fout << "\n\t\t                       Vehicle Service - Customer Invoice                  "<<endl;
        fout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        fout << "\t\t	| GST IN:"<<"----------------------------|"<<setw(10)<<"33CEXHJI90IOS"<<"   |"<<endl;
        fout << "\t\t	| Invoice No. :"<<"----------------------|"<<setw(10)<<inv<<"      |"<<endl;
        fout << "\t\t	| Customer Name:"<<"---------------------|"<<setw(10)<<getName()<<"      |"<<endl;
        fout << "\t\t	| Vehicle Type:"<<"----------------------|"<<setw(10)<<vehicleType<<"      |"<<endl;
        fout << "\t\t\t| Items Checked:"<<"---------------------|"<<setw(10)<<Vehicle::count<<"      |"<<endl;
        fout << "\t\t	| Your Initial Charge is :"<<"-----------|"<<setw(10)<<x<<"      |"<<endl;
        fout << "\t\t	| Checkup Charges :"<<"------------------|"<<setw(10)<<cash<<"      |"<<endl;
        fout << "\t\t	 ________________________________________________________"<<endl;
        fout <<"\n";
        fout << "\t\t	| Total Service Charge is :"<<"----------|"<<setw(10)<<(cash+x)<<"      |"<<endl;
        fout << "\t\t	 ________________________________________________________"<<endl;
        fout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
        fout << "\t\t	 require an authorised signture #"<<endl;
        fout <<" "<<endl;
        fout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        fout << "\t\t	You are advised to pay up the amount before due date."<<endl;
        fout << "\t\t	Otherwise penelty fee will be applied"<<endl;
        fout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
}

