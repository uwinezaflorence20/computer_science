#include<iostream>
using namespace std;
int main(){
	char gills, forest, ring, comvex_cup;
	cout<<"please enter y for yes and n for no  \n \n";
	cout<<"does your mushroomhave gills?:\n";
	cin>>gills;
	cout<<"does your mushroom grow in forest:\n";
	cin>>forest;
	cout<<"does your mushroom have a ring:\n";
	cin>>ring;
	
	
	if(gills=='y'&&forest=='y'&& ring=='y'){
		cout<<"your mushroom is:AMANITE TUEMOUCHE";
	}
	else if(gills=='y'&&forest=='n'&& ring=='y'){
		cout<<"your mushroom is:AGARIC JAUNISSANT";
	}
	else if(gills=='n'&&forest=='y'&& ring=='n'){
		cout<<"your mushroom is:CEPE DE BORDEAU";
	}
	else if(gills=='y'&&forest=='y'&& ring=='n'){
	
	cout<<"does your mushroom have comvex cup:\n";
	cin>>comvex_cup;
	if(comvex_cup=='y')
	cout<<" your mushroom is:GIROLLE";
	else if(comvex_cup=='n')
	cout<<"your mushroom is:PIED BLEU";
}
else if(gills!='y'||gills!='n'||forest!='n'||forest!='y'||ring!='n'||ring!='y'){
	cout<<"answer must be only either y or n!!\n";
}

return 0;
}
