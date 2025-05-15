#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};
struct node * head = NULL;

void basaekle(int key)
{
   struct node * nnode = new node();
    nnode->data = key;

    if (head==NULL)
    {
        nnode->next = NULL;
        head=nnode;
        cout<<head->data<<"-Ýlk düðüm olarak baþa eklendi"<<endl;
    }
    else
    {
        nnode->next = head;
        head = nnode;
       
        cout<<head->data<<"-Baþa eklendi"<<endl;
    } 
}

void arayaekle(int key,int sira)
{
	node * nnode = new node();
	nnode->data = key;
	
	if(head == NULL)
	{
		head = nnode;
		nnode->next = NULL;
		cout<<head->data<<"-Baþa eklendi"<<endl;
	}
	else if(head->next == NULL)
	{
		if(head->data == sira)
		{
			nnode->next = head;
			head = nnode;
			cout<<head->data<<"-Baþa eklendi"<<endl;
		}
		else
		{
			cout<<"Aranan sýra bulunamadý!"<<endl;
		}
	}
	else
	{
		if(head->data == sira)
		{
			nnode->next=head;
			head=nnode;
			cout<<head->data<<"-Baþa eklendi"<<endl;
		}
		else if(head->next->data == sira)
		{
			nnode->next = head->next;
			head->next = nnode;
			cout<<nnode->data<<"-"<<nnode->next->data<<" düðümünden önce eklendi"<<endl;
		}
		
		else
		{
			node * temp = head;
			while(temp->next->data != sira)
				temp=temp->next;
			
			nnode->next = temp->next;
			temp->next = nnode;
			
			cout<<nnode->data<<"-"<<nnode->next->data<<" datalý düðümden önce eklendi"<<endl;
		}
	}
}

void sonaekle(int key)
{
    struct node * nnode = new node();
    nnode->data = key;

    if (head==NULL)
    {
        nnode->next = NULL;
        head=nnode;
        cout<<head->data<<"-Ýlk düðüm olarak eklendi"<<endl;
    }
    else if(head->next == NULL)
    {
        head->next = nnode;
        nnode->next = NULL;
        cout<<nnode->data<<"-Sona eklendi"<<endl;
    }
    else
    {
       node * temp = head;
       
        while(temp->next != NULL)
            temp = temp->next;
            
        temp->next = nnode;
        cout<<nnode->data<<"-Sona eklendi"<<endl;
    } 
}

void bastansil()
{
	if(head==NULL)
	{
		cout<<"Silinecek düðüm yok!"<<endl;
	}
	else
	{
		node * temp = head->next;
		delete head;
		head = temp;
	}
}

void aradansil(int sira)
{
	if(head==NULL)
	{
		cout<<"Silinecek düðüm yok!"<<endl;
	}
	
	else if(head->next==NULL)
	{
		cout<<"Aranan sýra bulunamadý!"<<endl;
	}
	
	else if(head->data == sira)
	{
		cout<<head->data<<"-datalý düðüm silindi!"<<endl;
		delete head;
		head = NULL;
	}
	
	else if(head->next->data == sira)
	{
		node * temp = head->next->next;
		cout<<head->next->data<<"-datalý düðüm silindi"<<endl;
		delete head->next;
		head->next = temp;
	}
	
	else if(head->data != sira)
	{
		node * temp = head;
		while(temp->next->next->data != sira)
			temp=temp->next;
		
		node*temp2 = temp->next->next;
		
		cout<<temp->next->data<<"-datalý düðüm silindi"<<endl;
		delete temp->next;
		temp->next = temp2;
	}
	
	else 
		cout<<" Aranan sýra bulunamadý!"<<endl;
}

void sondansil()
{
	if(head==NULL)
	{
		cout<<"Silinecek düðüm yok!"<<endl;
	}
	else if(head->next == NULL)
	{
		delete head;
		head=NULL;
		cout<<"Tek düðüm silindi!"<<endl;
	}
	else
	{
		node * temp = head;
		while(temp->next->next != NULL)
			temp = temp->next;
		
		cout<<temp->next->data<<"-datalý düðüm silindi"<<endl;
		delete temp->next;
		temp->next = NULL;
	}
}

void ara(int aranan)
{
	bool bulundu = false;
	int i = 1;
	
	if(head == NULL)
		bulundu = false;
		
	else if(head->data == aranan)
	{
		bulundu = true;
	}
		
	else if(head->next == NULL)
		bulundu = false;
	
	else if(head->next->data == aranan)
	{
		bulundu = true;
		i = 2;
	}
		
	else
	{
		node * temp = head;
		
		while(temp->next->next != NULL)
		{
			i++;
			if(temp->next->data == aranan)
				break;
				
			temp = temp->next;
			
		}
		
		if(temp->next->data == aranan)
			bulundu = true;
			
		else
			bulundu = false;
	}
	
	if(bulundu)
		cout<<"Aranan deðer "<<i<<". sýradaki düðümde bulundu"<<endl;
	else
		cout<<"Aranan deðer bulunamadý"<<endl;
	
}

void yazdir()
{
	int i = 1;
	node * temp = head;
	while(temp != NULL)
	{
		cout<<i<<". düðümün datasý :"<<temp->data<<endl;
		temp = temp->next;
		i++;
	}
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	int key,secim,sira,aranan;
	
	while(1)
	{
		cout<<endl<<"[0-Sonlandýr] -[1-Baþa ekle] - [2-Araya ekle] - [3-Sona ekle] \n[4-Baþtan sil] - [5-Aradan sil] - [6-Sondan sil] - [7-Ara] - [8-Yazdýr]"<<endl<<endl;
		cout<<"Seçim :";
		cin>>secim;
		
		switch(secim)
		{
			case 0:
				cout<<"Program sonlandýrýlýyor..";
				return 0;
			break;
			
			case 1:
				
				cout<<"Baþa eklenecek sayýyý giriniz:";
				cin>>key;
				basaekle(key);
				cout<<endl;
			break;
			
			case 2:	
				cout<<"Sayý giriniz:";
				cin>>key;
				
				cout<<"Sýra giriniz:";
				cin>>sira;
				
				arayaekle(key,sira);
				cout<<endl;
			break;
			
			case 3:				
				cout<<"Sona eklenecek sayý giriniz:";
				cin>>key;
				sonaekle(key);
			break;
			
			case 4:				
				bastansil();
			break;
			
			case 5:
			cout<<"Hangi sayýdan önceki düðüm silinsin? :";
				cin>>sira;			
				aradansil(sira);
			break;
			
			case 6:				
				sondansil();
			break;
			
			
			case 7:
				cout<<"Aranacak sayýyý giriniz :";
				cin>>aranan;				
				ara(aranan);
			break;
			
			case 8:
				yazdir();
			break;
		}
	}
}
