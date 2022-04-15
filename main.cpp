#include <iostream>

using namespace std;

int main()
{
// Variables:m=mode b=bus l=location ans&a=answer(yes/no)
    char m,b,a,l,ans;
    float price,disc,cash,change,promo,peak,Tprice;
    string mon;
    int age;


    cout << "----------TRANSPORTATION SYSTEM----------\n ";
    cout<<"\n Welcome! \n";

//N E S T E D  - I F S

    cout<<"Kindly enter the corresponding number of your preferred type/mode of transportation:\n";
    cout<<"[1] By Land \t  [2] By Sea\n";
    cin>>m;

    if(m=='1')
    {
        cout<<" -BUS\n";
        cout<<"Enter the corresponding number of your preferred Bus Transit \n";
        cout<<"[1] Victory Liner \t [2] First North \n";
        cin>>b;

// VICTORY LINER BUS TRANSIT

             if(b=='1')
            {
              cout<<"Location and Cost(from Sampaloc,Manila Bus Terminal): \n";
              cout<<"[1]Baguio-487.00      \t        [5]Santiago,Isabela-594.00\n[2]Tabuk,Kalinga-844.00\t        [6]Tuguegarao,Cagayan-888.00\n[3]Olongapo,Zambales-228.00\t[7]Appari,Cagayan-1,075.00\n[4]Iba,Zambales-379.00\n\n";
              cout<<"Please choose and enter the corresponding number of your desired location:\n";
              cin>>l;
              if(l=='1')

              {
                  price=487;
              }
              else if(l=='2')
              {
                  price=844;
              }
              else if(l=='3')
              {
                  price=288;
              }
              else if(l=='4')
              {
                  price=379;
              }
              else if(l=='5')
              {
                  price=594;
              }
              else if(l=='6')
              {
                  price=888;
              }
              else if(l=='7')
              {
                  price=1075;
              }
              else
              {
                  cout<<"--- Invalid Input ---";
                  return 0;
              }

              cout<<" Do you have a Senior Citizen discount ID?\n";
              cout<<"    [1]Yes \t    [2]No\n";
              cin>>ans;
                   if(ans=='1')
                   {
                     cout<<"Enter Age:\n:";
                     cin>>age;
                          if(age>=60)

                            {
                              disc=(price)*(0.20);
                              cout<<"\n Availing Senior Citizen Discount....\n\n";

                            }
                          else if(age<60)
                            {
                              disc=0;
                              cout<<"\n Sorry you cannot avail the discount.\n\n";
                              cout<<"\n Continuing Transaction....\n\n";
                            }
                          else
                          {
                              cout<<"------Invalid Input------";
                              return 0;
                          }

                   }
                    else if(ans=='2')
                   {
                      disc=0;
                      cout<<"Continuing Transaction....\n\n";
                   }
                    else
                   {
                      cout<<"------Invalid Input-------";
                      return 0;
                   }

                   cout<<"Peak Season: December,January,March,April\n";
                   cout<<"Promo: 20% Discount for the month of August!!!\n";
                   cout<<"Enter the MONTH you'd like to book your bus ticket:\n";
                   cout<<"[1]January\t[7]July\n[2]February\t[8]August\n[3]March\t[9]September\n[4]April\t[10]October\n[5]May\t        [11]November\n[6]June\t        [12]December\n";
                   cin>>mon;

                   if(mon=="1"||mon=="3"||mon=="4"||mon=="12")
                   {
                       peak=100;
                       promo=0;
                       Tprice=(price-disc)+(peak)+(promo);
                   }
                   else if(mon=="8")
                   {
                       peak=0;
                       promo=100;
                       Tprice=(price)-(promo)-(disc);
                   }
                   else if(mon=="2"||mon=="5"||mon=="6"||mon=="7"||mon=="9"||mon=="10"||mon=="11")
                   {
                       peak=0;
                       promo=0;
                       Tprice=(price)-(promo)-(disc);
                   }
                   else
                   {
                       cout<<"--------Invalid Input---------";
                       return 0;
                   }

                   cout<<"------------------------------------------\n";
                   cout<<"Original Fare:"<<price<<endl;
                   cout<<"Peak Season(additional charges):+"<<peak<<endl;
                   cout<<"Discount:-"<<disc<<"\tPromo:-"<<promo<<endl;
                   cout<<"-------------------------------------------\n";
                   cout<<"Total Fare:"<<Tprice<<endl;
                   cout<<"Enter Cash Amount:";
                   cin>>cash;
                   change=(cash)-(Tprice);
                   cout<<"-------------------------------------------\n";
                   cout<<"Cash Amount:"<<cash<<"\tChange:"<<change<<endl<<endl<<endl;
                   cout<<" Thank You For Using MMVJ Services!";
                   return 0;

             }
// FIRST NORTH LUZON BUS TRANSIT

             if(b=='2')
            {
              cout<<"Location and Cost(from Caloocan,Manila Bus Terminal): \n";
              cout<<"[1]Tabang-50.00\t        [5]Apalit-73.00\n[2]Malolos-51.00\t[6]Macabebe-84.00\n[3]Longos-56.00\t        [7]Masantol-89.00\n[4]Calumpit-66.00\n\n";
              cout<<"Please choose and enter the corresponding number of your desired location:\n";
              cin>>l;
              if(l=='1')

              {
                  price=50;
              }
              else if(l=='2')
              {
                  price=51;
              }
              else if(l=='3')
              {
                  price=56;
              }
              else if(l=='4')
              {
                  price=66;
              }
              else if(l=='5')
              {
                  price=73;
              }
              else if(l=='6')
              {
                  price=84;
              }
              else if(l=='7')
              {
                  price=89;
              }
              else
              {
                  cout<<"--- Invalid Input ---";
                  return 0;
              }

              cout<<" Do you have a Senior Citizen discount ID?\n";
              cout<<"    [1]Yes \t    [2]No\n";
              cin>>ans;
                   if(ans=='1')
                   {
                     cout<<"Enter Age:\n:";
                     cin>>age;
                          if(age>=60)

                            {
                              disc=(price)*(0.20);
                              cout<<"\n Availing Senior Citizen Discount....\n\n";

                            }
                          else if(age<60)
                            {
                              disc=0;
                              cout<<"\n Sorry you cannot avail the discount.\n\n";
                              cout<<"\n Continuing Transaction....\n\n";
                            }
                          else
                          {
                              cout<<"------Invalid Input------";
                              return 0;
                          }

                   }
                    else if(ans=='2')
                   {
                      disc=0;
                      cout<<"Continuing Transaction....\n\n";
                   }
                    else
                   {
                      cout<<"------Invalid Input-------";
                      return 0;
                   }

                   cout<<"Peak Season: December,January,March,April\n";
                   cout<<"Promo: 20% Discount for the month of August!!!\n";
                   cout<<"Enter the MONTH you'd like to book your bus ticket:\n";
                   cout<<"[1]January\t[7]July\n[2]February\t[8]August\n[3]March\t[9]September\n[4]April\t[10]October\n[5]May\t        [11]November\n[6]June\t        [12]December\n";
                   cin>>mon;

                   if(mon=="1"||mon=="3"||mon=="4"||mon=="12")
                   {
                       peak=50;
                       promo=0;
                       Tprice=(price-disc)+(peak)+(promo);
                   }
                   else if(mon=="8")
                   {
                       peak=0;
                       promo=50;
                       Tprice=(price)-(promo)-(disc);
                   }
                   else if(mon=="2"||mon=="5"||mon=="6"||mon=="7"||mon=="9"||mon=="10"||mon=="11")
                   {
                       peak=0;
                       promo=0;
                       Tprice=(price)-(promo)-(disc);
                   }
                   else
                   {
                       cout<<"--------Invalid Input---------";
                       return 0;
                   }

                   cout<<"------------------------------------------\n";
                   cout<<"Original Fare:"<<price<<endl;
                   cout<<"Peak Season(additional charges):+"<<peak<<endl;
                   cout<<"Discount:-"<<disc<<"\tPromo:-"<<promo<<endl;
                   cout<<"-------------------------------------------\n";
                   cout<<"Total Fare:"<<Tprice<<endl;
                   cout<<"Enter Cash Amount:";
                   cin>>cash;
                   change=(cash)-(Tprice);
                   cout<<"-------------------------------------------\n";
                   cout<<"Cash Amount:"<<cash<<"\tChange:"<<change<<endl<<endl<<endl;
                   cout<<" Thank You For Using MMVJ Services!";
                   return 0;

        }
          else
              {
                  cout<<"--- Invalid Input ---";
                  return 0;
              }


   }


//// BY    S E A, FERRY

   else if(m=='2')
    {
        cout<<"FERRY:\n";
        cout<<"Starlite Ferries\n\n";
        cout<<"Proceed?\n";
        cout<<"  [1]Yes \t [2]No\n";
        cin>>a;
        if(a=='1')
        {
        cout<<"Location and Cost: \n";
        cout<<"[1]Batangas to Calapan \t [4]Roxas to Caticlan \n [2]Matnog to Allen \t [5]Batangas to Puerto Galera\n[3]Roxas to Odiongan\n\n";
        cout<<"Please choose and enter the corresponding number of your desired location:\n";
        cin>>l;
             if(l=='1')

              {
                  price=250;
              }
              else if(l=='2')
              {
                  price=120;
              }
              else if(l=='3')
              {
                  price=250;
              }
              else if(l=='4')
              {
                  price=450;
              }
              else if(l=='5')
              {
                  price=225;
              }

              else
              {
                  cout<<"--- Invalid Input ---";
                  return 0;
              }

              cout<<" Do you have a Senior Citizen discount ID?\n";
              cout<<"    [1]Yes \t    [2]No\n";
              cin>>ans;
                   if(ans=='1')
                   {
                     cout<<"Enter Age:\n:";
                     cin>>age;
                          if(age>=60)

                            {
                              disc=(price)*(0.20);
                              cout<<"\n Availing Senior Citizen Discount....\n\n";

                            }
                          else if(age<60)
                            {
                              disc=0;
                              cout<<"\n Sorry you cannot avail the discount.\n\n";
                              cout<<"\n Continuing Transaction....\n\n";
                            }
                          else
                          {
                              cout<<"------Invalid Input------";
                              return 0;
                          }

                   }
                    else if(ans=='2')
                   {
                      disc=0;
                      cout<<"Continuing Transaction....\n\n";
                   }
                    else
                   {
                      cout<<"------Invalid Input-------";
                      return 0;
                   }

                   cout<<"Peak Season: December,January,March,May\n";
                   cout<<"Promo: 20% Off for the month of September to October!!!\n";
                   cout<<"Enter the MONTH you'd like to book your bus ticket:\n";
                   cout<<"[1]January\t[7]July\n[2]February\t[8]August\n[3]March\t[9]September\n[4]April\t[10]October\n[5]May\t        [11]November\n[6]June\t        [12]December\n";
                   cin>>mon;

                   if(mon=="1"||mon=="3"||mon=="5"||mon=="12")
                   {
                       peak=100;
                       promo=0;
                       Tprice=(price-disc)+(peak)+(promo);
                   }
                   else if(mon=="9"||mon=="10")
                   {
                       peak=0;
                       promo=100;
                       Tprice=(price)-(promo)-(disc);
                   }
                   else if(mon=="2"||mon=="4"||mon=="6"||mon=="7"||mon=="9"||mon=="11")
                   {
                       peak=0;
                       promo=0;
                       Tprice=(price)-(promo)-(disc);
                   }
                   else
                   {
                       cout<<"--------Invalid Input---------";
                       return 0;
                   }

                   cout<<"------------------------------------------\n";
                   cout<<"Original Fare:"<<price<<endl;
                   cout<<"Peak Season(additional charges):+"<<peak<<endl;
                   cout<<"Discount:-"<<disc<<"\tPromo:-"<<promo<<endl;
                   cout<<"-------------------------------------------\n";
                   cout<<"Total Fare:"<<Tprice<<endl;
                   cout<<"Enter Cash Amount:";
                   cin>>cash;
                   change=(cash)-(Tprice);
                   cout<<"-------------------------------------------\n";
                   cout<<"Cash Amount:"<<cash<<"\tChange:"<<change<<endl<<endl<<endl;
                   cout<<" Thank You For Using MMVJ Services!\n";
        }
        else if(a=='2')
        {
            cout<<"Canceling Transaction....\n\n";
            cout<<"Thank You For Using MMVJ Services!\n";
        }
        else
        {
            cout<<"--------Invalid Input---------";
                       return 0;
        }
    }
    else
    {
       cout<<"--------Invalid Input---------";
                       return 0;
    }

    return 0;
}
