#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<graphics.h>
void DigitalChoice(),ChoiceConversation(),Dec_HexaOp(long),ChoiceOperation(),Dec_HexaOpR(int),Dec_BinaryOp(long);
int ChoiceBinary(),ChoiceDecimal(),ChoiceHexa(),ChoiceOctal(),ChoiceBinaryOp(),ChoiceDecimalOp(),ChoiceHexaOp(),ChoiceOctalOp();
long Binary_DecOp(unsigned long),Dec_OctaOp(long),Hexa_DecOp(char[],int),Octa_DecOp(long);
void main()
{	   clrscr();
   int dd=DETECT,m;
   initgraph(&dd,&m,"c:\\turboC3\\bgi");
	DigitalChoice();
}

void DigitalChoice()
{ 
    clrscr();
    cleardevice();
	int choice;
	cout<<"\n\t\t\t    WellCome to Digital World "<<endl<<endl<<endl
	     <<"\t\t1. Conversations"<<endl<<endl
		 <<"\t\t2. Operations"<<endl<<endl
		 <<"\t\t3. Exit"<<endl<<endl
	     <<"\t\tEnter 1, 2 or 3:   ";
	cin>>choice;
	switch(choice)
	{
	   case 1:ChoiceConversation(); break;
	   case 2:ChoiceOperation();break;
	   case 3:exit;break;
	   default:DigitalChoice();break;
	}
}


void ChoiceConversation()
{  clrscr();
    cleardevice();
    int choice;
	cout<<"\n\t\t\t\tConversations"<<endl<<endl
           <<"\t\t1. From Binary to ___"<<endl<<endl
           <<"\t\t2. From Decimal to ___"<<endl<<endl
           <<"\t\t3. From Hexadecimal to ___"<<endl<<endl
           <<"\t\t4. From Octal to ___"<<endl<<endl
		   <<"\t\t5. Back"<<endl<<endl;
	   	cout<<"\t\tEnter 1, 2, 3, 4 or 5:   ";
	   	cin>>choice;
	   	 switch(choice)
	        {
  		case 1:choice=ChoiceBinary();
  		       switch(choice)
		 	  {
       		  
       		  	case 1:{clrscr();
    				cleardevice();
				unsigned long bin;char choice2;
				cout<<"\n\n\n\t\t\t\tFrom Binary to Decimal"<<endl<<endl;
				do{		
		    		  	 cout<<"\n\t\tEnter the Binary Number(not exceed 10 bits): ";
				  	 cin>>bin;				
				  	 cout<<"\n\t\tDecimal Number -  "<<Binary_DecOp(bin);
				  	 cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
				  	 cout<<endl;
				 }while(choice2=='y');
				ChoiceConversation();
				}break;
       		  	case 2:{clrscr();
    				cleardevice();
  				unsigned long bin;char choice2;long dec;
  				cout<<"\n\n\n\t\t\tFrom Binary to Hexadecimal"<<endl<<endl;
				do{		
		    		  	cout<<"\n\t\tEnter the Binary Number(not exceed 10 bits): ";
				   	cin>>bin;
				   	dec=Binary_DecOp(bin);	
				   	Dec_HexaOp(dec)	;		
				   	cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
				   	cout<<endl;
				   }while(choice2=='y'); 
				ChoiceConversation();
				}break;
       		  	case 3:{clrscr();
    				cleardevice();
  				unsigned long bin;char choice2;long dec;
  				cout<<"\n\n\n\t\t\t\tFrom Binary to Octal"<<endl<<endl;
				do{		
		    		   	cout<<"\n\t\tEnter the Binary Number(not exceed 10 bits): ";
				   	cin>>bin;
				   	dec=Binary_DecOp(bin);	
				   	cout<<"\n\t\tOctal Number -  "<<Dec_OctaOp(dec);		
				   	cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
				   	cout<<endl;
				   }while(choice2=='y'); 
				ChoiceConversation();
				}break;
       		  	case 4:ChoiceConversation();break;
       		  	default:ChoiceConversation();break;
       		  }break;
  		case 2:choice=ChoiceDecimal();
  		       switch(choice)
		       {
			case 1:	{clrscr();
    				cleardevice();
				long dec;char choice2;
	  			cout<<"\n\n\n\t\t\t\tFrom Decimal to Binary"<<endl<<endl;
				do{
				   	cout<<"\n\t\tEnter the Decimal Number: ";cin>>dec;
				  	Dec_BinaryOp(dec);		
				   	cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
				   	cout<<endl;
				   }while(choice2=='y');
				ChoiceConversation();
				}break;
       		  	case 2:{clrscr();
    				cleardevice();
    				long dec;char choice2;
    				cout<<"\n\n\n\t\t\tFrom Decimal to Hexadecimal"<<endl<<endl;
    				do{		
				   	cout<<"\n\t\tEnter the Decimal Number(not exceed 8 bits): ";
				   	cin>>dec;
				   	Dec_HexaOp(dec);		
				   	cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
				   	cout<<endl;
				   }while(choice2=='y');
				ChoiceConversation();
				}break;
       		  	case 3:{clrscr();
    				cleardevice();
				long oct,dec;char choice2;
				cout<<"\n\n\n\t\t\t\tFrom Decimal to Octal"<<endl<<endl;
				do{		
					cout<<"\n\t\tEnter the decimal number(not exceed 8 bits): ";cin>>dec;
		 			oct=Dec_OctaOp(dec);
		 			cout<<"\n\t\tOctal Number - "<<oct;
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceConversation();
				}break;
       		  	case 4:ChoiceConversation();break;
       		  	default:ChoiceConversation();break;
       		  }break;
  		case 3:choice=ChoiceHexa();
  		       switch(choice)
		 	  {
			case 1:{clrscr();
    				cleardevice();
				char Hexa[100],hex;int var;char choice2,ch;
				cout<<"\n\n\n\t\t\tFrom Hexadecimal to Binary"<<endl<<endl;
	 			long dec,bin;
				do{
					int p=0;
					cout<<"\n\t\tEnter the Hexadecimal Number(not exceed 7 bits): ";
 	     				while((ch=getche())!='\r')
         				{
         					Hexa[p]=ch;cout<<ch;
		    				p++;	
     	 				}
     					dec=Hexa_DecOp(Hexa,p);
					Dec_BinaryOp(dec);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceConversation();
				}break;
       		  	case 2:{clrscr();
    				cleardevice();
				char Hexa[100],hex;int var;char choice2,ch;
				cout<<"\n\n\n\t\t\tFrom Hexadecimal to Decimal"<<endl<<endl;
				do{
					int p=0;
					cout<<"\n\t\tEnter the Hexadecimal Number(not exceed 7 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa[p]=ch;cout<<ch;
		    				p++;	
     	 				}
					cout<<"\n\t\tDecimal Number -  "<<Hexa_DecOp(Hexa,p);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceConversation();
				}break;
       		  	case 3:{clrscr();
    				cleardevice();
				char Hexa[100],hex;int var;char choice2,ch;
				cout<<"\n\n\n\t\t\tFrom Hexadecimal to Octal"<<endl<<endl;
	 			long dec,oct;
				do{
					int p=0;
					cout<<"\n\t\tEnter the Hexadecimal Number(not exceed 7 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa[p]=ch;cout<<ch;
		    				p++;	
     	 				}
     	 				dec=Hexa_DecOp(Hexa,p);
     	 				oct=Dec_OctaOp(dec);
					cout<<"\n\t\tOctal Number -  "<<oct;
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceConversation();
				}break;
       		  	case 4:ChoiceConversation();break;
       		  	default:ChoiceConversation();break;
       		  }break;
  		case 4:choice=ChoiceOctal();
  		       switch(choice)
		 	{
       		  	case 1:{clrscr();
    				cleardevice();
			long oct,dec;unsigned long bin;char choice2;
			cout<<"\n\n\n\t\t\t\tFrom Octal to Binary"<<endl<<endl;
			do{
				cout<<"\n\t\tEnter the Octal Number(not exceed 9 bits): ";
				cin>>oct;
				dec=Octa_DecOp(oct);
				Dec_BinaryOp(dec);
				cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
				cout<<endl;
			}while(choice2=='y');
			ChoiceConversation();
			}break;
       		  	case 2:{clrscr();
    				cleardevice();
				long oct;char choice2;
				cout<<"\n\n\n\t\t\t\tFrom Octal to Decimal"<<endl<<endl;
				do{
					cout<<"\n\t\tEnter the Octal Number(not exceed 9 bits): ";
					cin>>oct;				
					cout<<"\n\t\tDecimal Number -  "<<Octa_DecOp(oct);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceConversation();
				}break;
       		  	case 3:{clrscr();
    				cleardevice();
				long oct,dec;char choice2;
				cout<<"\n\n\n\t\t\tFrom Octal to Hexadecimal"<<endl<<endl;
				do{
					cout<<"\n\t\tEnter the Octal Number(not exceed 9 bits): ";
					cin>>oct;
					dec=Octa_DecOp(oct);
					Dec_HexaOp(dec);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceConversation();
				}break;
       		  	case 4:ChoiceConversation();break;
       		  	default:ChoiceConversation();break;
       		  }break;
	    case 5: DigitalChoice();break;
	    default:ChoiceConversation();break;
  	  }
}


int ChoiceBinary()
{   clrscr();
    cleardevice();
    int choice;
	cout<<"\t\t\t   Conversations from Binary"<<endl<<endl<<endl
           <<"\t\t1. From Binary to Decimal"<<endl<<endl
           <<"\t\t2. From Binary to Hexadecimal"<<endl<<endl
           <<"\t\t3. From Binary to Octal"<<endl<<endl
		   <<"\t\t4. Back"<<endl<<endl;
          cout<<"\t\tEnter 1, 2, 3 or 4:  ";
	   	cin>>choice;
	return choice;
}

int ChoiceDecimal()
{  clrscr();
    cleardevice();
    int choice;
	cout<<"\t\t\t   Conversations from Decimal"<<endl<<endl<<endl
           <<"\t\t1. From Decimal to Binary"<<endl<<endl
           <<"\t\t2. From Decimal to Hexadecimal"<<endl<<endl
           <<"\t\t3. From Decimal to Octal"<<endl<<endl
		   <<"\t\t4. Back"<<endl<<endl;
       cout<<"\t\tEnter 1, 2, 3 or 4:  ";
	   	cin>>choice;
	return choice;
}

int ChoiceHexa()
{  clrscr();
    cleardevice();
    int choice;
	cout<<"\t\t\t   Conversations from Hexadecimal"<<endl<<endl<<endl
           <<"\t\t1. From Hexadecimal to Binary"<<endl<<endl
           <<"\t\t2. From Hexadecimal to Decimal"<<endl<<endl
           <<"\t\t3. From Hexadecimal to Octal"<<endl<<endl
		   <<"\t\t4. Back"<<endl<<endl;
        cout<<"\t\tEnter 1, 2, 3 or 4:  ";
	   	cin>>choice;
	return choice;
}

int ChoiceOctal()
{   clrscr();
    cleardevice();
    int choice;
	cout<<"\t\t\t   Conversations from Octal"<<endl<<endl<<endl
           <<"\t\t1. From Octal to Binary"<<endl<<endl
           <<"\t\t2. From Octal to Decimal"<<endl<<endl
           <<"\t\t3. From Octal to Hexadecimal"<<endl<<endl
		   <<"\t\t4. Back"<<endl<<endl;
         cout<<"\t\tEnter 1, 2, 3 or 4:  ";
	   	cin>>choice;
	return choice;
}	

long Binary_DecOp(unsigned long bin)
{
   int p=0;long j=1,biny[100];long dec=0;
   	while(bin>0)
		{
			biny[p]=bin%10;
			p++;
			bin=bin/10;
		}
	for(int i=0;i<p;i++)
        { 
		    dec=dec+biny[i]*j;
            j*=2;
        }
   return dec;
}


void Dec_BinaryOp(long dec)
{int deci[100];int p=0;
while(dec>0)
	{
	deci[p]=dec%2;
	p++;
	dec=dec/2;
    }
 cout<<"\n\n\t\tBinary Number -  ";
for(int j=p-1;j>=0;j--)
   {
   cout<<deci[j];
   }
}

void Dec_HexaOp(long dec)
{int deci[100],p=0;
	while(dec>0)
		{
		deci[p]=dec%16;
		p++;
		dec=dec/16;
		}
	cout<<"\n\t\tHexadecimal Number -  ";
	for(int j=p-1;j>=0;j--)
	{   if(deci[j]>=10)
             {
				  switch(deci[j])
				  {
					case 10:cout<<"A";break;
					case 11:cout<<"B";break;
					case 12:cout<<"C";break;
					case 13:cout<<"D";break;
					case 14:cout<<"E";break;
					case 15:cout<<"F";break;
				  }
	         }
	            else
				cout<<deci[j];
	}
}

void Dec_HexaOpR(int rem)
{int rema[100];int p=0;
	while(rem>0)
		{
		rema[p]=rem%16;
		p++;
		rem=rem/16;
		}
	cout<<"\n\n\t\tRemainder -  ";
	for(int j=p-1;j>=0;j--)
	{   if(rema[j]>=10)
             {
				  switch(rema[j])
				  {
					case 10:cout<<"A";break;
					case 11:cout<<"B";break;
					case 12:cout<<"C";break;
					case 13:cout<<"D";break;
					case 14:cout<<"E";break;
					case 15:cout<<"F";break;
				  }
	         }
	            else
				cout<<rema[j];
	}
}

long Dec_OctaOp(long dec)
{long rem=1;long oct=0;
	    while(dec!=0)
        {
			oct=oct+(dec%8)*rem;
			rem*=10;
			dec=dec/8;
		}
	return oct;	
}

long Hexa_DecOp(char Hexa[],int p)
{
	long dec=0,var,j=1,i;
	for(i=p-1;i>=0;i--)
	    { 
	        switch(Hexa[i])
            {
          	        case '0':var=0;break;
					case '1':var=1;break;
					case '2':var=2;break;
					case '3':var=3;break;
					case '4':var=4;break;
					case '5':var=5;break;	
					case '6':var=6;break;
					case '7':var=7;break;
					case '8':var=8;break;
					case '9':var=9;break;
					case 'A':var=10;break;
					case 'B':var=11;break;	
					case 'C':var=12;break;
					case 'D':var=13;break;
					case 'E':var=14;break;
					case 'F':var=15;break;						
  	        }
       dec=dec+var*j;
       j*=16;
       }
 return dec;
}

long Octa_DecOp(long oct)
{
  int Octa[100];int p=0;
  long dec=0,j=1;
  while(oct>0)
	{
		Octa[p]=oct%10;
		p++;oct=oct/10;
	}
  for(int i=0;i<p;i++)
   { 
     dec=dec+Octa[i]*j;
     j*=8;
   }
return dec;
}

void ChoiceOperation()
{clrscr();
    cleardevice();
    int choice;
	cout<<"\n\t\t\t\tOperations"<<endl<<endl
           <<"\t\t1. Binary "<<endl<<endl
           <<"\t\t2. Hexadecimal "<<endl<<endl
           <<"\t\t3. Octal "<<endl<<endl
           <<"\t\t4. Back"<<endl<<endl;
	   	cout<<"\tEnter 1, 2, 3 or 4:   ";
	   	cin>>choice;
	   	 switch(choice)
	  {
  		
  		case 1:choice=ChoiceBinaryOp();
  		       switch(choice)
		       {
       		  	case 1:{clrscr();
    				cleardevice();
				unsigned long bin,bin1,bin2;long dec,dec1,dec2;char choice2;
				cout<<"\n\n\n\t\t\t\tBinary Addition"<<endl<<endl;
				do{		
		    			cout<<"\n\t\tEnter the first Binary Number(not exceed 10 bits): ";
					cin>>bin1;
					cout<<"\n\n\t\tEnter the second Binary Number(not exceed 10 bits): ";
					cin>>bin2;				
					dec1=Binary_DecOp(bin1);
					dec2=Binary_DecOp(bin2);
					dec=dec1+dec2;
					Dec_BinaryOp(dec);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 2:{clrscr();
   				cleardevice();
				unsigned long bin,bin1,bin2; long dec,dec1,dec2;char choice2;
				cout<<"\n\n\n\t\t\t\tBinary Subtraction"<<endl<<endl;
				do{		
		    			cout<<"\n\t\tEnter the first Binary Number(not exceed 10 bits): ";
					cin>>bin1;
					cout<<"\n\n\t\tEnter the second Binary Number(not exceed 10 bits): ";
					cin>>bin2;				
					dec1=Binary_DecOp(bin1);
					dec2=Binary_DecOp(bin2);
					if(dec1>dec2)
			 			dec=dec1-dec2;
					else 
						dec=dec2-dec1;
					Dec_BinaryOp(dec);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 3:{clrscr();
    				cleardevice();
				unsigned long bin,bin1,bin2;long dec,dec1,dec2;char choice2;
				cout<<"\n\n\n\t\t\t\tBinary Multiplication"<<endl<<endl;
				do{		
		    			cout<<"\n\t\tEnter the first Binary Number(not exceed 5 bits): ";
					cin>>bin1;
					cout<<"\n\n\t\tEnter the second Binary Number(not exceed 5 bits): ";
					cin>>bin2;				
					dec1=Binary_DecOp(bin1);
					dec2=Binary_DecOp(bin2);
					dec=dec1*dec2;
					Dec_BinaryOp(dec);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 4:{clrscr();
   				cleardevice();
				unsigned long bin,bin1,bin2;long dec,dec1,dec2,rem;char choice2;
				cout<<"\n\n\n\t\t\t\tBinary Division"<<endl<<endl;
				do{		
		    			cout<<"\n\t\tEnter the first Binary Number(not exceed 10 bits): ";
					cin>>bin1;
					cout<<"\n\n\t\tEnter the second Binary Number(not exceed 10 bits): ";
					cin>>bin2;				
					dec1=Binary_DecOp(bin1);
					dec2=Binary_DecOp(bin2);
			  		dec=dec1/dec2;
			   		rem=dec1%dec2;
					Dec_BinaryOp(dec);
					int rema[100];int p=0;
					while(rem>0)
					{
						rema[p]=rem%2;
						p++;
						rem=rem/2;
   					}
 					cout<<"\n\n\t\tThe Remainder -  " ;
					for(int j=p-1;j>=0;j--)
  					{
   						cout<<rema[j];
   					}
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
		  	case 5:ChoiceOperation();break;
       		  	default:ChoiceOperation();break;
       		  }break;
  		
  		case 2:choice=ChoiceHexaOp();
  		       switch(choice)
		       {
       		  	case 1:{clrscr();
    				cleardevice();
				char Hexa1[100],Hexa2[100],choice2,ch,hex;int var;long dec1,dec2,dec;
				cout<<"\n\n\n\t\t\tHexadecimal Addition"<<endl<<endl;
				do{
					int p1=0,p2=0;
					cout<<"\n\t\tEnter the first Hexadecimal Number(not exceed 7 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa1[p1]=ch;
						cout<<ch;
		    				p1++;	
     	 				}
     	 				cout<<"\n\n\t\tEnter the second Hexadecimal Number(not exceed 7 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa2[p2]=ch;
						cout<<ch;
		    				p2++;	
     	 				}
     	 				cout<<endl;
     	 				dec1=Hexa_DecOp(Hexa1,p1);
     	 				dec2=Hexa_DecOp(Hexa2,p1); 
		  			dec=dec1+dec2;    	 
					Dec_HexaOp(dec);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 2:{clrscr();
    				cleardevice();
				char Hexa1[100],Hexa2[100],choice2,ch,hex;int var;long dec1,dec2,dec;
				cout<<"\n\n\n\t\t\tHexadecimal Substraction"<<endl<<endl;
				do{
					int p1=0,p2=0;
					cout<<"\n\t\tEnter the first Hexadecimal Number(not exceed 7 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa1[p1]=ch;
           					cout<<ch;
		    				p1++;	
     	 				}
     	 				cout<<"\n\n\t\tEnter the second Hexadecimal Number(not exceed 7 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa2[p2]=ch;
						cout<<ch;
		   				p2++;	
     	 				}
     	 				cout<<endl;
     	 				dec1=Hexa_DecOp(Hexa1,p1);
     	 				dec2=Hexa_DecOp(Hexa2,p1); 
     	 				if(dec1>dec2)
		  				dec=dec1-dec2; 
		 			else 
						dec=dec2=dec1;   	 
					Dec_HexaOp(dec);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 3:{clrscr();
    				cleardevice();
				char Hexa1[100],Hexa2[100],choice2,ch,hex;int var;long dec1,dec2,dec;
				cout<<"\n\n\n\t\t\tHexadecimal Multiplication"<<endl<<endl;
				do{
					int p1=0,p2=0;
					cout<<"\n\t\tEnter the first Hexadecimal Number(not exceed 3 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa1[p1]=ch;
                				cout<<ch;
		    				p1++;	
     	 				}
     	 				cout<<"\n\n\t\tEnter the second Hexadecimal Number(not exceed 3 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa2[p2]=ch;
	   					cout<<ch;
		    				p2++;	
     	 				}
     	 				cout<<endl;
     	 				dec1=Hexa_DecOp(Hexa1,p1);
     	 				dec2=Hexa_DecOp(Hexa2,p1); 
		  			dec=dec1*dec2;    	 
					Dec_HexaOp(dec);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 4:{clrscr();
    				cleardevice();
				char Hexa1[100],Hexa2[100],choice2,ch,hex;int var;long dec1,dec2,rem,dec;
				cout<<"\n\n\n\t\t\tHexadecimal Division"<<endl<<endl;
				do{
					int p1=0,p2=0;
					cout<<"\n\t\tEnter the first Hexadecimal Number(not exceed 7 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa1[p1]=ch;
           					cout<<ch;
		    				p1++;	
     	 				}
     	 				cout<<"\n\n\t\tEnter the second Hexadecimal Number(not exceed 7 bits): ";
 	     				while((ch=getche())!='\r')
 	     				{
     	   					Hexa2[p2]=ch;
           					cout<<ch;
		    				p2++;	
     	 				}
     	 				cout<<endl;
     	 				dec1=Hexa_DecOp(Hexa1,p1);
     	 				dec2=Hexa_DecOp(Hexa2,p1); 
		  			dec=dec1/dec2;
		  			rem=dec1%dec2;  
		  			cout<<endl; 	 
					Dec_HexaOp(dec);
					Dec_HexaOpR(rem);
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 5:ChoiceOperation();break;
       		  	default:ChoiceOperation();break;
       		  }break;
  		case 3:choice=ChoiceOctalOp();
  		       switch(choice)
		 	{
       		  	case 1:{clrscr();
    				cleardevice();
				long oct,oct1,oct2,dec,dec1,dec2;char choice2;
				cout<<"\n\n\n\t\t\t\tOctal Addition"<<endl<<endl;
				do{
					cout<<"\n\t\tEnter the first Octal Number(not exceed 9 bits): ";
					cin>>oct1;	
					cout<<"\n\n\t\tEnter the second Octal Number(not exceed 9 bits): ";
					cin>>oct2;
					dec1=Octa_DecOp(oct1);
					dec2=Octa_DecOp(oct2);
					dec=dec1+dec2;
					oct=Dec_OctaOp(dec)	;			
					cout<<"\n\n\t\tOctal Number -  "<<oct;
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 2:{clrscr();
    				cleardevice();
				long oct,oct1,oct2,dec,dec1,dec2;char choice2;
				cout<<"\n\n\n\t\t\t\tOctal Substraction"<<endl<<endl;
				do{
					cout<<"\n\t\tEnter the first Octal Number(not exceed 9 bits): ";
					cin>>oct1;	
					cout<<"\n\n\t\tEnter the second Octal Number(not exceed 9 bits): ";
					cin>>oct2;
					dec1=Octa_DecOp(oct1);
					dec2=Octa_DecOp(oct2);
					if(dec1>dec2)
			  			dec=dec1-dec2;
	        			else 
						dec=dec2-dec1;
					oct=Dec_OctaOp(dec)	;			
					cout<<"\n\n\t\tOctal Number -  "<<oct;
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 3:{clrscr();
    				cleardevice();
				long oct,oct1,oct2,dec,dec1,dec2;char choice2;
				cout<<"\n\n\n\t\t\t\tOctal Multiplication"<<endl<<endl;
				do{
					cout<<"\n\t\tEnter the first Octal Number(not exceed 5 bits): ";
					cin>>oct1;	
					cout<<"\n\n\t\tEnter the second Octal Number(not exceed 4 bits): ";
					cin>>oct2;
					dec1=Octa_DecOp(oct1);
					dec2=Octa_DecOp(oct2);
					dec=dec1*dec2;
					oct=Dec_OctaOp(dec);				
					cout<<"\n\n\t\tOctal Number -  "<<oct;
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 4:{clrscr();
    				cleardevice();
				long oct,oct1,oct2,dec,dec1,dec2,rem;char choice2;
				cout<<"\n\n\n\t\t\t\tOctal Division"<<endl<<endl;
				do{
					cout<<"\n\t\tEnter the first Octal Number(not exceed 9 bits): ";
					cin>>oct1;	
					cout<<"\n\n\t\tEnter the second Octal Number(not exceed 9 bits): ";
					cin>>oct2;
					dec1=Octa_DecOp(oct1);
					dec2=Octa_DecOp(oct2);
					dec=dec1/dec2;
					rem=dec1%dec2;
					oct=Dec_OctaOp(dec);
					rem=Dec_OctaOp(rem);				
					cout<<"\n\n\t\tOctal number -  "<<oct;
					cout<<"\n\n\t\tRemainder -  "<<rem;
					cout<<"\n\n\t\tTo again (y/n): ";cin>>choice2;
					cout<<endl;
				}while(choice2=='y');
				ChoiceOperation();
				}break;
       		  	case 5:ChoiceOperation();break;
       		  	default:ChoiceOperation();break;
       		  	}break;
		case 4: DigitalChoice();break;
  		default:ChoiceOperation();break;
  	  }
}

int ChoiceBinaryOp()
{   clrscr();
    cleardevice();
    int choice;
	cout<<"\t\t\t    Binary Operations "<<endl<<endl<<endl
           <<"\t\t1. Binary Addition"<<endl<<endl
           <<"\t\t2. Binary Subtraction"<<endl<<endl
           <<"\t\t3. Binary Multiplication"<<endl<<endl
           <<"\t\t4. Binary Division"<<endl<<endl
          <<"\t\t5. Back"<<endl<<endl;
         cout<<"\t\tEnter 1, 2, 3, 4 or 5:  ";
	   	cin>>choice;
	return choice;
}

int ChoiceDecimalOp()
{ clrscr();
    cleardevice();
    int choice;
	cout<<"\t\t\t    Decimal Operations"<<endl<<endl<<endl
           <<"\t\t1. Decimal Addition"<<endl<<endl
           <<"\t\t2. Decimal Subtraction"<<endl<<endl
           <<"\t\t3. Decimal Multiplication"<<endl<<endl
           <<"\t\t4. Decimal Division"<<endl<<endl
         <<"\t\t5. Back"<<endl<<endl;
         cout<<"\t\tEnter 1, 2, 3, 4 or 5:  ";
	   	cin>>choice;
	return choice;
}

int ChoiceHexaOp()
{  clrscr();
    cleardevice();
    int choice;
	cout<<"\t\t\t    Hexadecimal Operations"<<endl<<endl<<endl
           <<"\t\t1. Hexadecimal Addition"<<endl<<endl
           <<"\t\t2. Hexadecimal Subtraction"<<endl<<endl
           <<"\t\t3. Hexadecimal Multiplication"<<endl<<endl
           <<"\t\t4. Hexadecimal Division"<<endl<<endl
         <<"\t\t5. Back"<<endl<<endl;
         cout<<"\t\tEnter 1, 2, 3, 4 or 5:  ";
	   	cin>>choice;
	return choice;
}

int ChoiceOctalOp()
{  clrscr();
    cleardevice();
    int choice;
	cout<<"\t\t\t    Octal Operations"<<endl<<endl<<endl
           <<"\t\t1. Octal Addition"<<endl<<endl
           <<"\t\t2. Octal Subtraction"<<endl<<endl
           <<"\t\t3. Octal Multiplication"<<endl<<endl
           <<"\t\t4. Octal Division"<<endl<<endl
         <<"\t\t5. Back"<<endl<<endl;
         cout<<"\t\tEnter 1, 2, 3, 4 or 5:  ";
	   	cin>>choice;
	return choice;
}
