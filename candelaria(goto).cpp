#include <iostream>
using namespace std;

int main(){
	int choice,innerChoice, count=0,goback;
	home: //loop
	goback = 0;
	system("cls");
	system("COLOR A");
	cout<<"==================================================\n";
	cout<<"||  \t\tFINAL PROJECT"; cout<<"\t\t\t||\n";
	cout<<"||  Presented by: Albert Joseph M. Candelaria"; cout<<"\t||\n";
	cout<<"||  Course/Section: BSITWMA - W03"; cout<<"\t\t||\n";
	cout<<"||  Professor: Prof. John Benedict Legaspi"; cout<<"\t||\n";
	cout<<"==================================================\n\n";
	cout<<"[1] - LAB 1 (Basic Calculation)"<<endl;
	cout<<"[2] - LAB 2 (Control Structure)"<<endl;
	cout<<"[3] - LAB 3 (For Loop)"<<endl;
	cout<<"[4] - LAB 4 (Nested Loop)"<<endl;
	cout<<"[5] - LAB 5 (Arrays)"<<endl;
	cout<<"[6] - EXIT"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Visited Programs: "<<count;
	cout<<endl;
	cout<<endl;
	cout<<"\nPlease input your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1: 
		back: 
			system("cls");
			cout<<"======================="<<endl;
			cout<<"\tLAB 1"<<endl;
			cout<<"======================="<<endl;
			cout<<endl;
			
			cout<<"[1] - Activity 1.1 (Celcius to Farenheit)"<<endl;
			cout<<"[2] - Activity 1.2 (Farenheit to Celcius)"<<endl;
			cout<<"[3] - Activity 1.3 (Area of Square)"<<endl;
			cout<<endl;
			cout<<"Visited Programs: "<<count;
			cout<<endl;
			cout<<endl;
			cout<<"Press 0 if you want to go back to home.\n";
			cout<<"Input what activity: ";
			cin>>innerChoice;
			
			
			if(innerChoice == 1){
				system ("cls");
				count++;
				cout<<"============================"<<endl;
				cout<<"\tActivity 1.1"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				float celcius, fahrenheit;
				cout<<"Celcius to Farenheit converter"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Input your desired celcius: ";
				cin>>celcius;
				
				fahrenheit = celcius * 1.8 + 32;
				cout<<"Your Fahrenheit is "<<fahrenheit<<endl;
			}
			else if(innerChoice == 2){
				system("cls");
				count++;
				cout<<"============================"<<endl;
				cout<<"\tActivity 1.2"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				float celcius, fahrenheit;
				cout<<"Farenheit to Celcius converter"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Input your desired fahrenheit: ";
				cin>>fahrenheit;
				
				celcius = (fahrenheit - 32) * 0.56;
				cout<<"Your celcius is "<<celcius<<endl;
			} else if(innerChoice == 3){
				system("cls");
				count++;
				cout<<"============================"<<endl;
				cout<<"\tActivity 1.3"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				float areaOfSqaure, sideSquare;
				cout<<"Area Of Square"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Input your desired number of the side of square: ";
				cin>>sideSquare;
				
				areaOfSqaure = sideSquare * sideSquare;
				
				cout<<"The area of your sqaure is "<<areaOfSqaure<<endl;
				
			} else {
				cout<<endl<<endl;
				cout<<"Invalid Input!";
				cout<<" Please Go Back!";
				cout<<endl;
			}
				again:
				cout<<endl<<endl;
				cout<<"[1] Go Back"<<endl;
				cout<<"[2] Home"<<endl;
				cout<<"Please input your decision: ";
				cin>>goback;
				if(goback == 1){
					goto back;
				} else if(goback == 2){
					goto home;
				} else {
					goto again;
				}
		break;
		
		case 2: 
			back2: 
			system("cls");
			cout<<"======================="<<endl;
			cout<<"\tLAB 2"<<endl;
			cout<<"======================="<<endl;
			cout<<endl;
			
			cout<<"[1] - Activity 2.1 (Selecting a Beverage)"<<endl;
			cout<<"[2] - Activity 2.2 (Horoscope Generator)"<<endl;
			cout<<"[3] - Activity 2.3 (Monthly Sales)"<<endl;
			cout<<endl;
			cout<<"Visited Programs: "<<count;
			cout<<endl;
			cout<<endl;
			cout<<"Press 0 if you want to go back to home.\n";
			cout<<"Input what activity: ";
			cin>>innerChoice;
			
			if(innerChoice == 1){
				system("cls");
				count++;
				//Activity 4.1 Selecting a beverage
				/*Write a program using switch statement that presents the user w/ a choice of 5 beverages (Coke, Water, Sprite, ... , and so on).
				Then allow the user to choose a beverage by entering a number 1-5.
				Output which beverage they chose. */

				cout<<"============================"<<endl;
				cout<<"\tActivity 2.1"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				int beverage;
				cout<<"Selecting a Beverage"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"\tAvailbale Beverages"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"[1] Coke"<<endl;
				cout<<"[2] Water"<<endl;
				cout<<"[3] Sprite"<<endl;
				cout<<"[4] Iced Tea"<<endl;
				cout<<"[5] Pepsi"<<endl;
				cout<<"\nPlease choose a beverage by entering the number 1-5: ";	
				cin>>beverage;
				cout<<endl;
				switch(beverage){
					case 1: 
						cout<<"You choose Coke";
					break;
					case 2: 
						cout<<"You choose Water";
					break;
					case 3: 
						cout<<"You choose Sprite";
					break;
					case 4: 
						cout<<"You choose Iced Tea";
					break;
					case 5: 
						cout<<"You choose Pepsi";
					break;
					default:
						cout<<"Invalid input!\n";
					break;
				}			
			}
			else if(innerChoice == 2){
				system("cls");
				count++;
				/*
					ACTIVITY 4.2: What is your horoscope? 
					Write a program that will ask for the zodiac sign. Create horoscopes for each zodiac sign.
					Display the horroscope for the zodiac sign entered.
					
					Consider the following input:
					Your zodiac sign: Scorpio
					Your horoscope: You will have a lucky day. Lucky color is blue. Lucky number is 3.
				*/
					cout<<"============================"<<endl;
					cout<<"\tActivity 2.2"<<endl;
					cout<<"============================"<<endl;
					cout<<endl;
					cout<<endl;
					int zodiacSign;
					cout<<"Horoscope Generator"<<endl;
					cout<<endl;
					cout<<endl;
					cout<<"-------------------------------"<<endl;
					cout<<"\tZodiac Sign"<<endl;
					cout<<"-------------------------------"<<endl;
					cout<<"[1] Aries"<<endl;
					cout<<"[2] Libra"<<endl;
					cout<<"[3] Taurus"<<endl;
					cout<<"[4] Scorpio"<<endl;
					cout<<"[5] Gemini"<<endl;
					cout<<"[6] Sagittarius"<<endl;
					cout<<"[7] Cancer"<<endl;
					cout<<"[8] Capricorn"<<endl;
					cout<<"[9] Leo"<<endl;
					cout<<"[10] Aquarius"<<endl;
					cout<<"[11] Virgo"<<endl;
					cout<<"[12] Pisces"<<endl;
					
					cout<<"\nPlease choose what is your zodiac sign: ";
					cin>>zodiacSign;
					
					if(zodiacSign == 1){
						cout<<"\nYour Zodiac Sign: Aries"<<endl;
						cout<<"Your Horoscope:  Perhaps you spent quite a bit of money\n"; 
						cout<<"lately and you're holding your breath waiting for the bills to roll in.\n";
						cout<<"Some quick reckoning of receipts today likely yields some wonderful news. Wonder of wonders,\n";
						cout<<"it appears you've stayed within your budget, Aries! Try not to overreact to the news that you have\n";
						cout<<"more money than you thought. Give your wallet and checkbook some time off.\n";
					}
					if(zodiacSign == 2){
						cout<<"\nYour Zodiac Sign: Libra"<<endl;
						cout<<"Your Horoscope: You think of yourself as a practical person, Libra, but today your thoughts\n"; 
						cout<<"may turn to the mystical and spiritual. Your intuition is strong now, letting you tune in to the feelings of your\n"; 
						cout<<"loved ones. This allows you to be empathetic and understanding, which your partner especially appreciates.\n"; 
						cout<<"Your intuition may inspire you to approach a problem in a new way. Let your mind wander and see what develops."<<endl;
					}
					if(zodiacSign == 3){
						cout<<"\nYour Zodiac Sign: Taurus"<<endl;
						cout<<"Your Horoscope: This is a good day to reflect on the past weeks and get some perspective, Taurus.\n"; 
						cout<<"You've probably been working too hard and neglecting other priorities in your life.\n"; 
						cout<<"Give yourself this day to relax and visit with friends and relatives. Spend the day chatting, laughing, and unwinding.\n"; 
						cout<<"Don't obsess about tasks that wait for you at the office. They aren't going anywhere."<<endl;
					}
					if(zodiacSign == 4){
						cout<<"\nYour Zodiac Sign: Scorpio"<<endl;
						cout<<"Your Horoscope: You will probably encounter a bit of opposition along with today's planetary energies, Scorpio.\n"; 
						cout<<"Even those who are usually right behind you will seem uncooperative. Try not to let this faze you too much.\n"; 
						cout<<"Resolve to follow your own instincts and work alone if need be.\n"; 
						cout<<"Once you've had a chance to advance your ideas further along on your own, you can present them again."<<endl;
					}
					if(zodiacSign == 5){
						cout<<"\nYour Zodiac Sign: Gemini"<<endl;
						cout<<"Your Horoscope: Don't plunge headfirst into work mode, Gemini. The cleaning and tidying up can surely wait for another day.\n"; 
						cout<<"Today's energies indicate that spending time with friends and family should be your main priority.\n"; 
						cout<<"Consider spending the afternoon doing activities with your kids. Hire a babysitter for the evening.\n"; 
						cout<<"It would do you good to go out with your partner - just the two of you."<<endl;
					}
					if(zodiacSign == 6){
						cout<<"\nYour Zodiac Sign: Sagittarius"<<endl;
						cout<<"Your Horoscope: Your thoughts today are likely to turn to setting goals for the future, particularly concerning your career.\n"; 
						cout<<"While you've made a lot of progress in recent months, you'd like to see even more forward movement.\n"; 
						cout<<"This would be a great day to start thinking of concrete ways to make that happen, Sagittarius.\n"; 
						cout<<"Why not have a family brainstorming session? It's likely to yield some great advice."<<endl;
					}
					if(zodiacSign == 7){
						cout<<"\nYour Zodiac Sign: Cancer"<<endl;
						cout<<"Your Horoscope: It's likely that your thoughts are completely turned to work.\n"; 
						cout<<"Much as you should devote your time off to friends and family, you can't help the way you're wired, Cancer.\n"; 
						cout<<"When at home, you may sneak away to check your email. Perhaps you secretly phone your business partner.\n"; 
						cout<<"Your family rolls their eyes, but generally understands and forgives your crazy behavior. Be sure to turn on the extra charm, just in case!"<<endl;
					}
					if(zodiacSign == 8){
						cout<<"\nYour Zodiac Sign: Capricorn"<<endl;
						cout<<"Your Horoscope: Today's planetary energies are stimulating your ambition, Capricorn.\n"; 
						cout<<"Issues connected with your professional life may be very much on your mind. You could plot out ways to further your career.\n"; 
						cout<<"Perhaps you seek a promotion in your current business, or you could be thinking about looking for another job entirely.\n"; 
						cout<<"This is the ideal time to put specific plans into place for the future."<<endl;
					}
					if(zodiacSign == 9){
						cout<<"\nYour Zodiac Sign: Leo"<<endl;
						cout<<"Your Horoscope: This is a good day for financial matters, Leo.\n"; 
						cout<<"With your credit cards maxed out, you may be thinking that your bank account isn't as healthy as it could be.\n"; 
						cout<<"But today you're likely to receive some news that indicates otherwise.\n"; 
						cout<<"You may get a windfall or discover that your portfolio is generating healthy returns. It's a good day for paperwork."<<endl;
					}
					if(zodiacSign == 10){
						cout<<"\nYour Zodiac Sign: Aquarius"<<endl;
						cout<<"Your Horoscope: You've been so busy socializing these past few weeks that you may have inadvertently neglected the\n";  
						cout<<"special person in your life, Aquarius.\n"; 
						cout<<"It's been fun to be out and about together, attending parties and having people over for dinner,\n"; 
						cout<<"but that has left little time for closeness and snuggling. Try to rectify that today. In fact, a midafternoon nap might be called for.\n"; 
						cout<<"Why not invite your honey to join you?"<<endl;
					}
					if(zodiacSign == 11){
						cout<<"\nYour Zodiac Sign: Virgo"<<endl;
						cout<<"Your Horoscope: You could be feeling quite lazy today, Virgo, and you definitely deserve to feel this way!\n"; 
						cout<<"You deserve some time off after all of the activities of the past week. Give yourself the gift of a true day off.\n"; 
						cout<<"Do only what you want, whether it's watching movies or spending the afternoon soaking in the tub. Total indulgence.\n"; 
						cout<<"Just relax and unwind."<<endl;
					}
					if(zodiacSign == 12){
						cout<<"\nYour Zodiac Sign: Pisces"<<endl;
						cout<<"Your Horoscope: It's possible that a big change is in store for you in the near future, Pisces.\n"; 
						cout<<"It may be that you've come to realize that your current home and neighborhood are no longer a good fit.\n"; 
						cout<<"If you've been toying with the idea of moving, today you may get some news that motivates you to make your fantasy a reality.\n";  
						cout<<"This is a good day to peruse the real estate listings. You might be pleasantly surprised by what you find."<<endl;
					}
					if(zodiacSign<1 || zodiacSign>12){
						cout<<"Invalid Input!\n";
					}
			} else if(innerChoice == 3){
				system("cls");
				count++;
					/* ACTIVITY 4.3: Monthly Sales
					Using if-else-if statements, Compute for the Monthly sales. Refer to the table below for the range.
					*/
					
					int monthlySales;
					float sales;
					cout<<"============================"<<endl;
					cout<<"\tActivity 2.3"<<endl;
					cout<<"============================"<<endl;
					cout<<endl;
					cout<<endl;
					cout<<"-------------------------------"<<endl;
					cout<<"\tMonthly Sales"<<endl;
					cout<<"-------------------------------"<<endl;
					
					cout<<"Please enter your Monthly Sales: ";
					cin>>monthlySales;
					
					if(monthlySales >= 50000){
						sales = monthlySales * .16;
						cout<<"Your total income is $"<<sales+575;
					}
					else if(monthlySales < 50000 && monthlySales >= 40000){
						sales = monthlySales * .14;
						cout<<"Your total income is $"<<sales+550;
					}
					else if(monthlySales < 40000 && monthlySales >= 30000){
						sales = monthlySales * .12;
						cout<<"Your total income is $"<<sales+525;
					}
					else if(monthlySales < 30000 && monthlySales >= 20000){
						sales = monthlySales * .9;
						cout<<"Your total income is $"<<sales+500;
					}
					else if(monthlySales < 20000 && monthlySales >= 10000){
						sales = monthlySales * .5;
						cout<<"Your total income is $"<<sales+450;
					}
					else if(monthlySales < 10000){
						sales = monthlySales * .3;
						cout<<"Your total income is $"<<sales+400;
					}
			} else {
				cout<<endl<<endl;
				cout<<"Invalid Input!";
				cout<<" Please Go Back!";
				cout<<endl;
			}
				again2:
				cout<<endl<<endl;
				cout<<"[1] Go Back"<<endl;
				cout<<"[2] Home"<<endl;
				cout<<"Please input your decision: ";
				cin>>goback;
				if(goback == 1){
					goto back2;
				} else if(goback == 2){
					goto home;
				} else {
					goto again2;
				}
		break;
		
		case 3: 
			back3: 
			system("cls");
			cout<<"======================="<<endl;
			cout<<"\tLAB 3"<<endl;
			cout<<"======================="<<endl;
			cout<<endl;
			
			cout<<"[1] - Activity 3.1 (Display the summation of all numbers)"<<endl;
			cout<<"[2] - Activity 3.2 (Display the average of all entered numbers)"<<endl;
			cout<<endl;
			cout<<"Visited Programs: "<<count;
			cout<<endl;
			cout<<endl;
			cout<<"Press 0 if you want to go back to home.\n";
			cout<<"Input what activity: ";
			cin>>innerChoice;
			
			if(innerChoice == 1){
				system("cls");
				count++;
				int iterations,i;
				float integers, sum=0.0;
				cout<<"============================"<<endl;
				cout<<"\tActivity 3.1"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Summation of all numbers"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Input the number of Iterations: ";
				cin>>iterations;
				cout<<"Enter integers\n";
					for(i=1; i<=iterations; i++){
						cout<<"Num "<<i<<": ";
						cin>>integers;
						sum+=integers;
					}
				cout<<"The sum that you've inpputed is "<<sum;				
			}
			else if(innerChoice == 2){
				system("cls");
				count++;
				int iterations,i;
				float integers, ave=0.0, sum=0.0;
				cout<<"============================"<<endl;
				cout<<"\tActivity 3.2"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Average of all entered numbers"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Input the number of Iterations: ";
				cin>>iterations;
				cout<<"Enter integers\n";
					for(i=1; i<=iterations; i++){
						cout<<"Num "<<i<<": ";
						cin>>integers;
						sum+=integers;
					}
				ave = sum/iterations;
				cout<<"The average that you've inpputed is "<<ave;
			} else {
				cout<<endl<<endl;
				cout<<"Invalid Input!";
				cout<<" Please Go Back!";
				cout<<endl;
			}	
				again3: 
				cout<<endl<<endl;
				cout<<"[1] Go Back"<<endl;
				cout<<"[2] Home"<<endl;
				cout<<"Please input your decision: ";
				cin>>goback;
				if(goback == 1){
					goto back3;
				} else if(goback == 2){
					goto home;
				} else {
					goto again3;
				}
		
		break;
		
		case 4: 
			back4: 
			system("cls");
			cout<<"======================="<<endl;
			cout<<"\tLAB 4"<<endl;
			cout<<"======================="<<endl;
			cout<<endl;
			
			cout<<"[1] - Activity 4.1 (Asterisk Pattern 1)"<<endl;
			cout<<"[2] - Activity 4.2 (Asterisk Pattern 2)"<<endl;
			cout<<"[3] - Activity 4.3 (Series of Numbers using nested loops)"<<endl;
			cout<<endl;
			cout<<"Visited Programs: "<<count;
			cout<<endl;
			cout<<endl;
			cout<<"Press 0 if you want to go back to home.\n";
			cout<<"Input what activity: ";
			cin>>innerChoice;
			
			if(innerChoice == 1){
				system("cls");
				count++;
				int i,j,limit;
				cout<<"============================"<<endl;
				cout<<"\tActivity 4.1"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Asterisk Pattern 1"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Input the number of limit: ";
				cin>>limit;
				for(i=1; i<=limit; i++){
					for(j=limit; j>=i; j--){
						cout<<"*";
					}
					cout<<endl;
				}				
			} else if(innerChoice == 2){
				system("cls");
				count++;
				int i,j,limit=6;
				cout<<"============================"<<endl;
				cout<<"\tActivity 4.2"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Asterisk Pattern 2"<<endl;
				cout<<endl;
				cout<<endl;
	
				for(i=1; i<=limit; i++){
					for(j=1; j<=limit; j++){
						if(i==1 || i== 6){
							if(j==3 || j==4){
								cout<<"*";
							}else{
								cout<<" ";
							}
						}
						if(i==2 || i==5){
							if(j==2 || j==5){
								cout<<"*";
							}else{
								cout<<" ";
							}
						}
						if(i==3 || i==4){
							if(j==1 || j==6){
								cout<<"*";
							} else{
								cout<<" ";
							}
						}
					}
					cout<<endl;
				}
			} else if(innerChoice == 3){
				system("cls");
				count++;
				cout<<"============================"<<endl;
				cout<<"\tActivity 4.3"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Series of Numbers using nested loops"<<endl;
				cout<<endl;
				cout<<endl;
	
				int limit;
				cout<<"Input the number of limit: ";
				cin>>limit;
				for (int tens=0; tens<limit; tens+=10){
					for (int mult=1; mult<=8; mult*=2){
						if(tens+mult <= limit){
						cout<<tens+mult<<" ";
						} else {
							cout<<" ";
						}
					}
				}
			} else {
				cout<<endl<<endl;
				cout<<"Invalid Input!";
				cout<<" Please Go Back!";
				cout<<endl;
			}	
				again4: 
				cout<<endl<<endl;
				cout<<"[1] Go Back"<<endl;
				cout<<"[2] Home"<<endl;
				cout<<"Please input your decision: ";
				cin>>goback;
				if(goback == 1){
					goto back4;
				} else if(goback == 2){
					goto home;
				} else {
					goto again4;
				}
		break;
		
		case 5: 
			back5:
			system("cls");
			cout<<"======================="<<endl;
			cout<<"\tLAB 5"<<endl;
			cout<<"======================="<<endl;
			cout<<endl;
			
			cout<<"[1] - Activity 5.1 (Reverse Order)"<<endl;
			cout<<"[2] - Activity 5.2 (Matching the Value inside an Array)"<<endl;
			cout<<"[3] - Activity 5.3 (Highest and Smallest number inside an array)"<<endl;
			cout<<endl;
			cout<<"Visited Programs: "<<count;
			cout<<endl;
			cout<<endl;
			cout<<"Press 0 if you want to go back to home.\n";
			cout<<"Input what activity: ";
			cin>>innerChoice;
			
			if(innerChoice == 1){
				system("cls");
				count++;
				int arr[10],i;
				int arr2[10];
				cout<<"============================"<<endl;
				cout<<"\tActivity 5.1"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Reverse Order"<<endl;
				cout<<endl;
				cout<<endl;
				for(i=0; i<10; i++){
					cout<<"Input integer "<<i+1<<" :";
					cin>>arr[i];
				}
				cout<<"\n\nThis is the original order"<<endl;
				for(i=0; i<10; i++){
					cout<<arr[i]<<" ";
				}
				cout<<"\n\nThis is the reverse order"<<endl;
				for(i=9; i>=0; i--){
					arr2[10] = arr[i];
					cout<<arr2[10]<<" ";
				}				
			} else if (innerChoice == 2){
				system("cls");
				count++;
				cout<<"============================"<<endl;
				cout<<"\tActivity 5.2"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Matching the Value inside an Array"<<endl;
				cout<<endl;
				cout<<endl;
				
				int arr[10],i,integer;
				bool result;
				cout<<"Input 10 intgers"<<endl<<endl;
				for(i=0; i<10; i++){
					cout<<"Input integer "<<i+1<<": ";
					cin>>arr[i];
				}
				cout<<"\n\nThis is the elements inside an array!"<<endl;
				for(i=0; i<10; i++){
					cout<<arr[i]<<" ";
				}
				cout<<"\n\nInput One integer: ";
				cin>>integer;
				for(i=0; i<10; i++){
					if(arr[i]==integer){
						result = true;
					} 
				}
				if(result == true){
					cout<<"Match found! Number "<<integer<<endl;
				}else {
					cout<<"No match found! Number "<<integer<<endl;
				}
			} else if (innerChoice == 3){
				system("cls");
				count++;
				cout<<"============================"<<endl;
				cout<<"\tActivity 5.3"<<endl;
				cout<<"============================"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Highest and Smallest number inside an array"<<endl;
				cout<<endl;
				cout<<endl;
				
				int arr[10],i,highest=0,lowest;
				for(i=0; i<10; i++){
					cout<<"Input integer "<<i+1<<" :";
					cin>>arr[i];
					lowest = arr[0];
				}
				for(i=0; i<10; i++){
					if(arr[i]>highest){
						highest = arr[i];
					}
					if(arr[i]<lowest){
						lowest = arr[i];
					}
				}
				cout<<endl;
				cout<<"The highest number in an array is "<<highest<<endl;
				cout<<"The smallest number in an array is "<<lowest<<endl;
			} else {
				cout<<endl<<endl;
				cout<<"Invalid Input!";
				cout<<" Please Go Back!";
				cout<<endl;
			}	
				again5:
				cout<<endl<<endl;
				cout<<"[1] Go Back"<<endl;
				cout<<"[2] Home"<<endl;
				cout<<"Please input your decision: ";
				cin>>goback;
				if(goback == 1){
					goto back5;
				} else if(goback == 2){
					goto home;
				} else {
					goto again5;
				}
		break;
		
		case 6:
			exit(0);
		break;
		default:
			goto home;
	}
	system("pause");
	return 0;
}
