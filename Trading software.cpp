#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    char start;
    float shop(void);
    char choice;
    
    startL:
           cout<<"Please press H to start shopping for Home Application"<<endl;
           start:
                 cin>>start;
                 
                 if(start=='h' || start=='H')
                 {
                       float total = shop();
                       time_t t = time(NULL);
                       tm* tPtr=localtime(&t);
                       
                       cout<<"Bill Date : ";
                       cout<<tPtr->tm_mday<<"/";
                       cout<<1+tPtr->tm_mon<<"/";
                       cout<<1900 + tPtr->tm_year<<endl;
                       cout<<"Bill time : "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
                       cout<<"Total Bill Amount : "<<total<<endl;
                       if(total>50000 && total<100000)
                       {
                              total= total-(0.05*total);
                              cout<<"Total discount : 5%"<<endl;
                       }
                       else if(total>100000 && total<125000)
                       {
                              total= total-(0.1*total);
                              cout<<"Total discount : 10%"<<endl;
                       }
                       else if(total>125000 && total<150000)
                       {
                              total= total-(0.25*total);
                              cout<<"Total discount : 25%"<<endl;
                       }
                       else if(total > 150000)
                       {
                              total= total-(0.5*total);
                              cout<<"Total discount : 50%"<<endl;
                       }
                       cout<<"Total Bill amount is : "<<total<<endl;
                       Again:
                              cout<<"Do you want shopping again y or n"<<endl;
                              cin>>choice;
                              if(choice=='y' || choice=='Y')
                              {
                                    goto startL;
                              }
                              else if(choice=='n' || choice=='N')
                              {
                                    cout<<"Thanks for Shopping\n Visit Again...!!!"<<endl;
                              }
                              else
                              {
                                    cout<<"You have entered the wrong option, please press H"<<endl;
                                    goto Again;
                              }
                  }
                  else
                  {
                        cout<<"You have entered wrong option, Please press H to start again"<<endl;
                        goto start;
                  }

}    
            float shop()
            {
                  shop: 
                        char choice;
                        char product;
                        int quantity;
                        float bill=0;
                        itemLevel:
                              cout<<"*****************WELCOME**************"<<endl;
                              cout<<"_____Please follow the Instruction_____"<<endl;
                              cout<<"  1) Please r to order Refriderator"<<endl;
                              cout<<"  2) Please w to order Washing Machine"<<endl;
                              cout<<"  3) Please t to order Television"<<endl;
                              cout<<"  4) Please m to order Microwave"<<endl;
                              cout<<"  5) Please a to order Air Conditioner"<<endl;
                              cin>>choice;

                              if(choice =='r' || choice =='R' || choice =='w' || choice =='W' || choice =='t' || choice =='T' || choice =='m' || choice =='M' || choice =='a' || choice =='A')
                              {
                                    if(choice =='r' || choice =='R')
                                    {
                                          RefrigeratorL:
                                          cout<<"_______Refrigerator Details _______"<<endl;
                                          cout<<"| 1) Whirlpool   =>  Price : 40000 |"<<endl;
                                          cout<<"| 2) Samsung     =>  Price : 25000 |"<<endl;
                                          cout<<"| 3) Haier       =>  Price : 20000 |"<<endl;
                                          cout<<"| 4) Voltas      =>  Price : 18000 |"<<endl;
                                          cout<<"| 5) Godrej      =>  Price : 30000 |"<<endl;
                                          cout<<"| 6) Panasonic   =>  Price : 35000 |"<<endl;

                                          cout<<"Please Enter your choice : "<<endl;
                                          cin>>product;
                                          if(product=='1')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*40000;
                                          }
                                          else if(product=='2')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*25000;
                                          }
                                          else if(product=='3')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*20000;
                                          }
                                          else if(product=='4')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*18000;
                                          }
                                          else if(product=='5')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*30000;
                                          }
                                          else if(product=='6')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*35000;
                                          }
                                          else 
                                          {
                                                cout<<"You have entered the wrong option, Please try again"<<endl;
                                                goto RefrigeratorL;
                                          }
                                    }
                                    
                                    if(choice =='w' || choice =='W')
                                    {
                                          WashingMachineL:
                                          cout<<"______Washing Machine Details ______"<<endl;
                                          cout<<"| 1) Boach      =>  Price : 40000 |"<<endl;
                                          cout<<"| 2) LG         =>  Price : 25000 |"<<endl;
                                          cout<<"| 3) Haier      =>  Price : 39000 |"<<endl;
                                          cout<<"| 4) IFB        =>  Price : 48000 |"<<endl;
                                          cout<<"| 5) Godrej     =>  Price : 30000 |"<<endl;
                                          cout<<"| 6) Samsung    =>  Price : 35000 |"<<endl;

                                          cout<<"Please Enter your choice : "<<endl;
                                          cin>>product;
                                          if(product=='1')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*40000;
                                          }
                                          else if(product=='2')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*25000;
                                          }
                                          else if(product=='3')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*39000;
                                          }
                                          else if(product=='4')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*48000;
                                          }
                                          else if(product=='5')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*30000;
                                          }
                                          else if(product=='6')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*35000;
                                          }
                                          else 
                                          {
                                                cout<<"You have entered the wrong option, Please try again"<<endl;
                                                goto WashingMachineL;
                                          }
                                    }
                                    
                                    if(choice =='t' || choice =='T')
                                    {
                                          TelevisionL:
                                          cout<<"________Television Details________"<<endl;
                                          cout<<"| 1) Sony       =>  Price : 97000 |"<<endl;
                                          cout<<"| 2) Samsung    =>  Price : 75000 |"<<endl;
                                          cout<<"| 3) LG         =>  Price : 70000 |"<<endl;
                                          cout<<"| 4) TCL        =>  Price : 50000 |"<<endl;
                                          cout<<"| 5) Godrej     =>  Price : 80000 |"<<endl;
                                          cout<<"| 6) Panasonic  =>  Price : 69000 |"<<endl;

                                          cout<<"Please Enter your choice : "<<endl;
                                          cin>>product;
                                          if(product=='1')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*97000;
                                          }
                                          else if(product=='2')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*75000;
                                          }
                                          else if(product=='3')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*70000;
                                          }
                                          else if(product=='4')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*50000;
                                          }
                                          else if(product=='5')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*80000;
                                          }
                                          else if(product=='6')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*69000;
                                          }
                                          else 
                                          {
                                                cout<<"You have entered the wrong option, Please try again"<<endl;
                                                goto WashingMachineL;
                                          }
                                    }

                                    if(choice =='m' || choice =='M')
                                    {
                                          MicrowaveL:
                                          cout<<"________Television Details________"<<endl;
                                          cout<<"| 1) LG        =>  Price : 40000 |"<<endl;
                                          cout<<"| 2) IFB       =>  Price : 35000 |"<<endl;
                                          cout<<"| 3) Whirlpool =>  Price : 30000 |"<<endl;
                                          cout<<"| 4) Panasonic =>  Price : 48000 |"<<endl;
                                          cout<<"| 5) Bajaj     =>  Price : 30000 |"<<endl;
                                          cout<<"| 6) Samsung   =>  Price : 35000 |"<<endl;

                                          cout<<"Please Enter your choice : "<<endl;
                                          cin>>product;
                                          if(product=='1')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*40000;
                                          }
                                          else if(product=='2')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*35000;
                                          }
                                          else if(product=='3')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*30000;
                                          }
                                          else if(product=='4')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*48000;
                                          }
                                          else if(product=='5')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*30000;
                                          }
                                          else if(product=='6')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*35000;
                                          }
                                          else 
                                          {
                                                cout<<"You have entered the wrong option, Please try again"<<endl;
                                                goto MicrowaveL;
                                          }
                                    }

                                    if(choice =='a' || choice =='A')
                                    {
                                          AirconditionerL:
                                          cout<<"______Air Conditioner Details________"<<endl;
                                          cout<<"| 1) Sony       =>  Price : 14000 |"<<endl;
                                          cout<<"| 2) Samsung    =>  Price : 19000 |"<<endl;
                                          cout<<"| 3) LG         =>  Price : 11000 |"<<endl;
                                          cout<<"| 4) Samsung    =>  Price : 22000 |"<<endl;
                                          cout<<"| 5) Godrej     =>  Price : 17000 |"<<endl;
                                          cout<<"| 6) Panasonic  =>  Price : 12000 |"<<endl;

                                          cout<<"Please Enter your choice : "<<endl;
                                          cin>>product;
                                          if(product=='1')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*14000;
                                          }
                                          else if(product=='2')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*19000;
                                          }
                                          else if(product=='3')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*11000;
                                          }
                                          else if(product=='4')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*22000;
                                          }
                                          else if(product=='5')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*17000;
                                          }
                                          else if(product=='6')
                                          {
                                                cout<<"Please, Enter the quatity of the product : "<<endl;
                                                cin>>quantity;
                                                bill+=quantity*12000;
                                          }
                                          else 
                                          {
                                                cout<<"You have entered the wrong option, Please try again"<<endl;
                                                goto AirconditionerL;
                                          }
                                    }
                              }
                              else
                              {
                                    cout<<"You have entered Wrong option, please try again...!!!"<<endl;
                                    goto shop;
                              }
                              return bill;
            }
