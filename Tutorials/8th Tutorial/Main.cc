#include <iostream>
using namespace std;
#include <string>
#include <vector>

#include "CheckInLogger.cc"
#include "CheckOutLogger.cc"
#include "Logger.cc"

int main() {

  vector<Logger *> data;

  //   Logger *temp = new Logger("lol");

  CheckInLogger *temp = new CheckInLogger("Nikhil");
  data.push_back(temp);
  temp = new CheckInLogger("Dilpreet");
  data.push_back(temp);
  temp = new CheckInLogger("Kanishk");
  data.push_back(temp);
  temp = new CheckInLogger("Sunil");
  data.push_back(temp);
  temp = new CheckInLogger("Reeta");
  data.push_back(temp);

  CheckOutLogger *temp1 = new CheckOutLogger("Adom");
  data.push_back(temp1);
  temp1 = new CheckOutLogger("Proton");
  data.push_back(temp1);
  temp1 = new CheckOutLogger("Neutron");
  data.push_back(temp1);
  temp1 = new CheckOutLogger("Nucleous");
  data.push_back(temp1);
  temp1 = new CheckOutLogger("Mitrochondria");
  data.push_back(temp1);

  for (int i = 0; i < data.size(); ++i) {
    data[i]->update();
  }

  for (int i = 0; i < data.size(); ++i) {
    delete data[i];
  }

  //   Animal *gertrude = new Animal("Gertrude");
  //   Bird *birtrude = new Bird("Birtrude");
  //   Chicken *redHen = new Chicken("Little Red Hen");
  //   Cat *lady = new Cat("Lady");

  //   vector<Animal *> barnyard;

  //   barnyard.push_back(gertrude);
  //   barnyard.push_back(birtrude);
  //   barnyard.push_back(redHen);
  //   barnyard.push_back(lady);

  //   cout << endl << "Barnyard harmony:" << endl;
  //   for (int i = 0; i < barnyard.size(); ++i) {
  //     barnyard[i]->sing();
  //   }

  //   cout << endl << "Barnyard slaughter:" << endl;
  //   for (int i = 0; i < barnyard.size(); ++i) {
  //     delete barnyard[i];
  //   }

  return 0;
}
