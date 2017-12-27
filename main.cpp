#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

class voting

{
private:
    int voter_id;
    char voter_name[30];
    int age;
    char address[30];
public:
    void input_details()
    {

                cout<<"Enter voter id\n";
                cin>>voter_id;
                cout<<"Enter voter name\n";
                cin>>voter_name;
                cout<<"Enter age\n";
                cin>>age;
                cout<<"Enter address\n";
                cin>>address;
            }


    void output_details()
    {

        cout<<endl<<voter_id<<"\t\t"<<voter_name<<"\t\t"<<age<<"\t\t"<<address<<endl;
           if(age>=18)
                {
                  cout<<"\nyou are eligible for voting"<<endl;
                }
            else
               {
                   cout<<"you are not eligible for voting"<<endl;
               }


    }

    void update()
		{
			int choice;
			cout<<"\n\n\t=========================> Update Information <=========================\n\n";
			cout<<"\n\n\t ---------------> choose Details You Want to Perform <--------------\n\n";
            cout<<"\nvoter id= "<<voter_id;
            cout<<"\nvoter name= "<<voter_name;
            cout<<"\nvoter age= "<<age;
            cout<<"\nParty name=="<<address;
            cout<<"\n\n Enter Your Choice ====>";
			cin>>choice;
			   switch(choice)
			    {
				case 1:
					 cout<<"enter voter id\n";
                     cin>>voter_id;
					 cout<<"\n";
					 break;
				case 2:
					cout<<"enter voter name\n";
                    cin>>voter_name;
					cout<<"\n";
					break;
				case 3:
					cout<<"enter age\n";
                    cin>>age;
					cout<<"\n";
					break;
				case 4:
					cout<<"Enter address\n";
                    cin>>address;
					cout<<"\n";
					break;

				default:
					cout<<"\n\n=======> Invalid Choice <=========\n";
					break;
			}
		}
};





int main()
{
    voting v[3];
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    cout<<"\n\t==============> Online Election System <================\n";

while(1)
        {



                cout<<"\n\n\t ********** Choose Operation You Want To Perform **********\n\n";

		cout<<"\n\n\t 1) CONDIDATE LIST";
		cout<<"\n\n\t 2) ADD NEW ELECTION";
		cout<<"\n\n\t 3) DISPLAY RESULT";
		cout<<"\n\n\t 4) Exit Program";
		cout<<"\n\n Enter your choice====>";
		int ch2;
		cin>>ch2;
		switch(ch2)
		{
                case 1:
                      while(1)
                        {
                            cout<<"\n\n\t ********** Choose Operation You Want To Perform **********\n\n";
                            cout<<"\n\n\t 1) ADD CONDIDATE";
                            cout<<"\n\n\t 2) DISPLAY CONDIDATE LIST";
                            cout<<"\n\n\t 3) UPDATE CONDIDATE RECORD";
                            cout<<"\n\n\t 4) Exit Program";
                            cout<<"\n\n Enter your choice====>";
                                int ch1;
                                cin>>ch1;
                                    switch(ch1)
		      {
                    case 1:
                        {
                        int i;
                          for(i=1;i<=3;i++)
                           {
                              cout<<"\t\t\t\tENTER DETAILS OF CONDIDATE:"<<i<<endl;
                              v[i].input_details();
                           }
                           break;
                        }


                    case 2:
                        {
                            cout<<"----------------------------------------------------"<<endl;
                            cout<<"voter_id\tvoter_name\tage\taddress"<<endl;
                            cout<<"----------------------------------------------------"<<endl;
                             int i;
                        for(i=1;i<=3;i++)
                        {

                            v[i].output_details();
                        }
                        break;
                        }
                    case 3:
                        {
                           int i;
                        for(i=1;i<=3;i++)
                        {
                        v[i].update();
                        }
                        break;
                        }
                    case 4:
                        goto out;

                    default:
                        cout<<"\n\n\t========> Invalid choice <========";
                        break;
		      }
    }

                    case 2:
                         {

                            int i;
                            for(i=1;i<=3;i++)
                                {

                                        cout<<"press 1 to vote ***BJP***BHARATIYA JANTA PARTY"<<endl;
                                        cout<<"press 2 to vote ***INC***INDIAN NATIONAL CONGRESS"<<endl;
                                        cout<<"press 3 to vote ***BSP***BAHUJAN SAMAJ PARTY"<<endl;
                                        cout<<"press 4 to vote ***CPI***Communist Party of India"<<endl;
                                        cout<<"press 5 to vote ***AITC**All India Trinamool Congress"<<endl;

                                        cout<<"enter your choice"<<endl;
                                        int ch5;
                                        cin>>ch5;

                                            switch(ch5)
                                                {
                                                    case 1:
                                                        a++;
                                                        break;
                                                    case 2:
                                                        b++;
                                                        break;
                                                    case 3:
                                                        c++;
                                                        break;
                                                    case 4:
                                                        d++;
                                                        break;
                                                    case 5:
                                                        e++;
                                                        break;



                                                }


                                    }



                        }
                        break;//end of case 2
                                                    case 3:
                                                            int max, arr[50], size, i;
                                                            cout<<"NUMBER OF VOTE EARNED BY BJP=="<<a<<endl;
                                                            cout<<"NUMBER OF VOTE EARNED BY INC=="<<b<<endl;
                                                            cout<<"NUMBER OF VOTE EARNED BY BSP=="<<c<<endl;
                                                            cout<<"NUMBER OF VOTE EARNED BY CPI=="<<d<<endl;
                                                            cout<<"NUMBER OF VOTE EARNED BY AITC=="<<e<<endl;


                                                                  cout<<"Enter total number of party list "<<endl;
                                                                    cin>>size;
                                                                    cout<<"Enter total number of vote of each party list "<<endl;
                                                                    for(i=0; i<size; i++)
                                                                    {
                                                                        cin>>arr[i];
                                                                    }

                                                                    max=arr[0];
                                                                    for(i=0; i<size; i++)
                                                                    {
                                                                            if(max<arr[i])
                                                                            {
                                                                                max=arr[i];
                                                                            }
                                                                        }
                                                                        cout<<"highest vote = "<<max<<endl;
                                                    if(max==a)
                                                                {
                                                                   cout<<"\t\t\t\t***********RESULT*************"<<endl;
                                                                   cout<<"\t\t\t\t------------------------------"<<endl;
                                                                   cout<<"\t\t\t\t\tBJP is winner"<<endl;
                                                                   cout<<"\t\t\t\t------------------------------"<<endl;
                                                                }

                                                                else if(max==b)
                                                                {
                                                                    cout<<"INC is winner"<<endl;
                                                                }

                                                                else if(max==c)
                                                                {
                                                                     cout<<"BSP is winner"<<endl;
                                                                }

                                                                else if(max==d)
                                                                {
                                                                   cout<<"CPI is winner"<<endl;
                                                                }

                                                                else
                                                                    {
                                                                        cout<<"AITC is winner"<<endl;

                                                                    }








}
    out:



getch();

}

}
