#include <iostream>
using namespace std;
int main()
{
        int size=5;
        int no=0;
        int data[size];
        cout<<"\n";
        cout<<"        @** SELECTION SORT **@\n";
        cout<<"\n";


        cout<<"Enter 10 values to sort :"<<endl;
                for(int k=0;k<size;k++)
                {
                cin>>data[k];
                }
                cout<<"\n";
                cout<<"Array  :";

                for(int n=0;n<size;n++)
                {
                no=data[n];
                cout<<"["<<no<<"]";
                }

                cout<<"\n";

	int min,tmp,i,j,min_index;
	for(i=0;i<size-1;i++)
	{
	min_index=i;
	
		for(j=i+1;j<size;j++)
		{
			if(data[j]<data[min_index]){
			min=data[j];
			min_index=j;
			}
		}
		
	        cout<<"Checking Minimum value...\n";
	        
			if(min_index!=i){	
			 tmp=data[i];

			cout<<"MIN value found!\n";
			cout<<"Need to swapped min value ["<<min<<"] with value ["<<tmp<<"\n";	
		
			data[i]=data[min_index];
			data[min_index]=tmp;
			}
		
               		 for(int n=0;n<size;n++)
               		 {
        	       	 no=data[n];
 	              	 cout<<"["<<no<<"]";
              	         }

                cout<<"\n";
		
	}	

}
