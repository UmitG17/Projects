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
        cout<<head->data<<"-�lk d���m olarak ba�a eklendi"<<endl;
    }
    else
    {
        nnode->next = head;
        head = nnode;
       
        cout<<head->data<<"-Ba�a eklendi"<<endl;
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
		cout<<head->data<<"-Ba�a eklendi"<<endl;
	}
	else if(head->next == NULL)
	{
		if(head->data == sira)
		{
			nnode->next = head;
			head = nnode;
			cout<<head->data<<"-Ba�a eklendi"<<endl;
		}
		else
		{
			cout<<"Aranan s�ra bulunamad�!"<<endl;
		}
	}
	else
	{
		if(head->data == sira)
		{
			nnode->next=head;
			head=nnode;
			cout<<head->data<<"-Ba�a eklendi"<<endl;
		}
		else if(head->next->data == sira)
		{
			nnode->next = head->next;
			head->next = nnode;
			cout<<nnode->data<<"-"<<nnode->next->data<<" d���m�nden �nce eklendi"<<endl;
		}
		
		else
		{
			node * temp = head;
			while(temp->next->data != sira)
				temp=temp->next;
			
			nnode->next = temp->next;
			temp->next = nnode;
			
			cout<<nnode->data<<"-"<<nnode->next->data<<" datal� d���mden �nce eklendi"<<endl;
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
        cout<<head->data<<"-�lk d���m olarak eklendi"<<endl;
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
		cout<<"Silinecek d���m yok!"<<endl;
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
		cout<<"Silinecek d���m yok!"<<endl;
	}
	
	else if(head->next==NULL)
	{
		cout<<"Aranan s�ra bulunamad�!"<<endl;
	}
	
	else if(head->data == sira)
	{
		cout<<head->data<<"-datal� d���m silindi!"<<endl;
		delete head;
		head = NULL;
	}
	
	else if(head->next->data == sira)
	{
		node * temp = head->next->next;
		cout<<head->next->data<<"-datal� d���m silindi"<<endl;
		delete head->next;
		head->next = temp;
	}
	
	else if(head->data != sira)
	{
		node * temp = head;
		while(temp->next->next->data != sira)
			temp=temp->next;
		
		node*temp2 = temp->next->next;
		
		cout<<temp->next->data<<"-datal� d���m silindi"<<endl;
		delete temp->next;
		temp->next = temp2;
	}
	
	else 
		cout<<" Aranan s�ra bulunamad�!"<<endl;
}

void sondansil()
{
	if(head==NULL)
	{
		cout<<"Silinecek d���m yok!"<<endl;
	}
	else if(head->next == NULL)
	{
		delete head;
		head=NULL;
		cout<<"Tek d���m silindi!"<<endl;
	}
	else
	{
		node * temp = head;
		while(temp->next->next != NULL)
			temp = temp->next;
		
		cout<<temp->next->data<<"-datal� d���m silindi"<<endl;
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
		cout<<"Aranan de�er "<<i<<". s�radaki d���mde bulundu"<<endl;
	else
		cout<<"Aranan de�er bulunamad�"<<endl;
	
}

void yazdir()
{
	int i = 1;
	node * temp = head;
	while(temp != NULL)
	{
		cout<<i<<". d���m�n datas� :"<<temp->data<<endl;
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
		cout<<endl<<"[0-Sonland�r] -[1-Ba�a ekle] - [2-Araya ekle] - [3-Sona ekle] \n[4-Ba�tan sil] - [5-Aradan sil] - [6-Sondan sil] - [7-Ara] - [8-Yazd�r]"<<endl<<endl;
		cout<<"Se�im :";
		cin>>secim;
		
		switch(secim)
		{
			case 0:
				cout<<"Program sonland�r�l�yor..";
				return 0;
			break;
			
			case 1:
				
				cout<<"Ba�a eklenecek say�y� giriniz:";
				cin>>key;
				basaekle(key);
				cout<<endl;
			break;
			
			case 2:	
				cout<<"Say� giriniz:";
				cin>>key;
				
				cout<<"S�ra giriniz:";
				cin>>sira;
				
				arayaekle(key,sira);
				cout<<endl;
			break;
			
			case 3:				
				cout<<"Sona eklenecek say� giriniz:";
				cin>>key;
				sonaekle(key);
			break;
			
			case 4:				
				bastansil();
			break;
			
			case 5:
			cout<<"Hangi say�dan �nceki d���m silinsin? :";
				cin>>sira;			
				aradansil(sira);
			break;
			
			case 6:				
				sondansil();
			break;
			
			
			case 7:
				cout<<"Aranacak say�y� giriniz :";
				cin>>aranan;				
				ara(aranan);
			break;
			
			case 8:
				yazdir();
			break;
		}
	}
}
