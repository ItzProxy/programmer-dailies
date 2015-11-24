#include <iostream>
#include <vector>

using namespace std;

/*[2015-11-23] Challenge # 242 [easy] Funny plant*/
/*
void main(){
	//technically the fibonacci sequence...but recursion is :(
	vector <int> plant;
	int people, plants; //people needed to feed, fruits given at the start
	int weeksElasped = 0;
	int fruits_in_harvest = 0;

	cin >> people >> plants;
	while (people > fruits_in_harvest){
		while (plants > (int)plant.size()){
			plant.push_back(0); //planting the plant
		}
		if (weeksElasped > 0){
			for (int i = 0; i < (int)plant.size(); i++){ //adds 1 fruit to the plant grown, each week increases the fruit produced
				plant[i] = plant[i] + 1;
			}
			fruits_in_harvest = 0;
			for (int i = 0; i < (int) plant.size(); i++){
				fruits_in_harvest += plant[i];
			}
			plants += fruits_in_harvest;
		}
		cout << "Number of plants: " << (int) plant.size() <<" - total fruit harvested: " << fruits_in_harvest << endl;
		weeksElasped++;
	}
	cout << "Weeks needed to feed all people: " << weeksElasped << endl;
}
*/
//my solution used vectors...terrible idea.
//better solution to above: /u/fibonacci__
void fib(int x, int y){
	int a = 0;
	int b = y;
	int c = 1;
	while (a < x){
		a = a + b;//fruits harvested
		b = a + b;//plants
		c += 1; //weekselasped
	}
	cout << c;
}
void main(){
	int x,y;
	cin >> x >> y;
	fib(x,y);
}


