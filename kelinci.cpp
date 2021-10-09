#include<iostream>
#include<stdlib.h>
using namespace std;
class kelinci_jenis
{
 int no_kelinci;
 char jenis_kelinci[20];
 char harga_kelinci[20];
 char asal_kelinci[20];
 public:
 	int Insert(kelinci_jenis *p,int n)
	{
	 cout<<"masukkan no kelinci: ";
	cin>>p[n].no_kelinci;
	cout<<"masukkan jenis kelinci: ";
	cin>> p[n].jenis_kelinci;
	cout<< "masukkan harga kelinci: ";
	cin>> p[n].harga_kelinci;
	cout<<"masukkan asal daerah kelinci: ";
	cin>> p[n].asal_kelinci;
	cout<<"\ninputan data di masukkan\n";
	n++;
	return n;
	}
	void Search(kelinci_jenis *p,int roll,int n)
	{
	int i=0;
	for( i=0;i<n;i++)
	{
	   if(p[i].no_kelinci==roll)
    		{
		cout<<"id\tnama kelinci\tharga kelinci\tasal kelinci\n==============================================\n";
	    	cout<<no_kelinci<<"\t"<<jenis_kelinci<<"\t"<<harga_kelinci<<"\t"<<asal_kelinci<<"\n";
		break;
    		}
	}
	if(p[i].no_kelinci!=roll)
	{
	cout<<"\nData Tidak Ditemukan\n";
	}

    }

	void Display(){
	cout<<no_kelinci<<"\t"<<jenis_kelinci<<"\t"<<harga_kelinci<<"\t"<<asal_kelinci<<"\n";
	}
	int Del(kelinci_jenis *p,int n,int roll)
	{
		int j=0,k,flag=0;
		for(j=0;j<n;j++)
		{
			if(p[j].no_kelinci==roll)
            {
                flag=1;
                break;
            }
		}
        if(flag==1)
        {
            for(k=j;k<n;k++)
            {
            p[k]=p[k+1];
            }
            cout<<"\nData telah dihapus.\n";
            return n-1;
        }
			else
			{
				cout<<"\ndata tidak ditemukan.\n";
				return n;
			}
	}
	int Update(kelinci_jenis *p,int roll,int n)
	{
		int i,ch1;
		for(i=0;i<n;i++)
		{
		if(p[i].no_kelinci==roll)
    		{
    			while(1){
    			cout<<"\n!!===Update data kelinci===!!\n";
    			cout<<"\n 1. Update nama kelinci";
    			cout<<"\n 2. Update harga kelinci";
   				cout<<"\n 3. Update asal kelinci";
                cout<<"\n 4. Update keseluruhan";
   				cout<<"\n 5. kembali kemenu awal";
   				cout<<"\n\n Enter Your Choice:";
   				cin>>ch1;    				
				switch(ch1){
    				case 1: cout<<"update nama kelinci:";
    						cin>>p[i].jenis_kelinci;
    						cout<<"data telah di Update...\n";
    						break;
   					case 2: cout<<"update harga kelinci:\t";
   							cin>>p[i].harga_kelinci;
   							cout<<"data telah di Update...\n";
   							break; 	
                    case 3: cout<<"update asal kelinci:\t";
                            cin>>p[i].asal_kelinci;
                            cout<<"data telah di Update...\n";
                            break; 					
					case 4: cout<<"nama:";
							cin>>p[i].jenis_kelinci;
							cout<<"harga:\t";
							cin>>p[i].harga_kelinci;
                            cout<<"asal:\t";
							cin>>p[i].asal_kelinci;
							cout<<"data telah di Update...\n";
							break;
					case 5: return n;
					default: cout<<"!!inputan yang anda masukkan salah !!";
							break;
					}
				}
			break;
    		}
		}
    		if(p[i].no_kelinci!=roll)
		{
    		cout<<"\ndata tidak ditemukan\n\n";
		}
	}
};
int main()
{
 kelinci_jenis o[10];
 int i=0,ch,j,roll;
 while(1)
  {
   cout<<"\n!!===SYSTEM PENDATAAN KELINCI===!!";
   cout<<"\n";
   cout<< "\n 1.TAMBAHKAN DATA";
   cout<< "\n 2.CARI DATA";
   cout<< "\n 3.TAMPILKAN SEMUA DATA";
   cout<< "\n 4.HAPUS DATA";
   cout<< "\n 5.UPDATE DATA";
   cout<< "\n 6.EXIT";
   cout<< "\n\n MASUKKAN INPUTAN:";
   cin>> ch;
   switch(ch){
     case 1: i=o[0].Insert(o,i);
               break;
     case 3: cout<<"ROLL\tNAME\tSEC\tDEPT\n==============================================\n";
		for(j=0;j<i;j++){
		o[j].Display();
		}
		break;
     case 2:
		cout<<"Enter the ROLL for Search:";
		cin>> roll;

		o[0].Search(o,roll,i);

		break;
	 case 4:
		cout<<"Enter the ROLL to Delete:";
		cin>> roll;
		i=o[0].Del(o,i,roll);
		break;
	 case 5:
	 	cout<<"Enter the ROLL For Data Update:";
		cin>> roll;
		i=o[0].Update(o,roll,i);
		break;
	 default: cout<<"Wrong Key!!";
	 		break;
     case 6: exit(0);
    }
  }

 }