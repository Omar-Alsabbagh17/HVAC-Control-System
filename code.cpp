#include <iostream>
using namespace std;

int main()

{
    int thermostat1 = 75, thermostat2 = 80, temp1 = 75, temp2 = 80;
    int user_choice = 6;
    string status = "HVAC OFF";
    string damper1 = "CLOSED", damper2 = "CLOSED";


        cout<<"Status:\n";
        cout<<status<<endl;
        cout<<"Zone 1 thermostat: "<<thermostat1<<endl;
        cout<<"Zone 2 thermostat: "<<thermostat2<<endl;
        cout<<"Zone 1 damper is "<<damper1<<endl;
        cout<<"Zone 2 damper is "<<damper2<<endl;
        cout<<"Zone 1 temperature: "<<temp1<<endl;
        cout<<"Zone 2 temperature: "<<temp2<<endl;

        cout<<"Enter a menu choice:\n";
        cout<<"0) Quit\n";
        cout<<"1) Set thermostats\n";
        cout<<"2) Wait 1 turn\n";
        cout<<"3) Wait 10 turns\n";
        cin>> user_choice;
        cout<<endl;


    while (user_choice !=0)
    {


        if (user_choice == 1)
        {
            cout<<"Set the thermostat for zone 1: ";
            cin>> thermostat1;
            cout<<endl;
            cout<<"Set the thermostat for zone 2: ";
            cin>> thermostat2;
            cout<<endl;
            if (thermostat1>temp1)
            {
                damper1 = "OPEN";
            }
            else if (thermostat1<temp1)
            {
                damper1 = "OPEN";
            }
            else
            {
                damper1 = "CLOSED";
            }
            if (thermostat2>temp2)
            {
                damper2 = "OPEN";
            }
            else if (thermostat2<temp2)
            {
                damper2 = "OPEN";


            }
            else
            {
                damper2 = "CLOSED";
            }


        }



        if (user_choice == 2)
        {
            if (thermostat1>temp1)
            {
                temp1 += 1;
                damper1 = "OPEN";
                status = "Furnace ON";
            }
            else if (thermostat1<temp1)
            {
                damper1 = "OPEN";
                temp1 -= 1;
                status = "AC ON";

            }
            else
            {
                damper1 = "CLOSED";
            }
            if (thermostat2>temp2)
            {
                damper2 = "OPEN";
                temp2 += 1;
                if (status != "AC ON")
                {
                    status = "Furnace ON";
                }
            }
            else if (thermostat2<temp2)
            {
                damper2 = "OPEN";
                temp2 -= 1;
                status = "AC ON";

            }
            else
            {
                damper2 = "CLOSED";


            }
            if (damper1 == "CLOSED" && damper2 == "CLOSED")
            {
                status = "HVAC OFF";
            }
        }


        if (user_choice == 3)
        {
            if (thermostat1>temp1 && thermostat1>(temp1+10))
            {
                temp1 += 10;
                damper1 = "OPEN";

            }
            else if (thermostat1<temp1 && thermostat1<(temp1-10))
            {
                damper1 = "OPEN";
                temp1 -= 10;

            }
            else
            {
                temp1 = thermostat1;
                damper1 = "CLOSED";

            }
            if (thermostat1 == temp1)
            {
                damper1 = "CLOSED";

            }


            if (thermostat2>temp2 && thermostat2>(temp2+10))
            {
                damper2 = "OPEN";
                temp2 += 10;
            }
            else if (thermostat2<temp2 && thermostat2<(temp2-10))
            {
                damper2 = "OPEN";
                temp2 -= 10;

            }
            else
            {
                temp2 = thermostat2;
                damper2 = "CLOSED";
            }
            if (thermostat2 == temp2)
            {
                damper2 = "CLOSED";
            }
            if (damper1 == "CLOSED" && damper2 == "CLOSED")
            {
                status = "HVAC OFF";
            }
        }



        if (thermostat1>temp1)
            {
                damper1 = "OPEN";
            }
            else if (thermostat1<temp1)
            {
                damper1 = "OPEN";
            }
            else
            {
                damper1 = "CLOSED";
            }
            if (thermostat2>temp2)
            {
                damper2 = "OPEN";
            }
            else if (thermostat2<temp2)
            {
                damper2 = "OPEN";


            }
            else
            {
                damper2 = "CLOSED";
            }
            if ((temp1>thermostat1) || (temp2 > thermostat2))
            {
                status = "AC ON";
            }

            else if ((temp1 < thermostat1 && status != "AC ON") || (temp2 < thermostat2 && status != "AC ON"))
            {
                status = "Furnace ON";
            }

            else
            {
                status = "HVAC OFF";
            }






        cout<<"Status:\n";
        cout<<status<<endl;
        cout<<"Zone 1 thermostat: "<<thermostat1<<endl;
        cout<<"Zone 2 thermostat: "<<thermostat2<<endl;
        cout<<"Zone 1 damper is "<<damper1<<endl;
        cout<<"Zone 2 damper is "<<damper2<<endl;
        cout<<"Zone 1 temperature: "<<temp1<<endl;
        cout<<"Zone 2 temperature: "<<temp2<<endl;

        cout<<"Enter a menu choice:\n";
        cout<<"0) Quit\n";
        cout<<"1) Set thermostats\n";
        cout<<"2) Wait 1 turn\n";
        cout<<"3) Wait 10 turns\n";
        cin>> user_choice;
        cout<<endl;
    }
return 0;

}

