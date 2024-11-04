#include <iostream>
#include <cstring>


class Car {

    public:
            
        char* brand; //(märke) - pointer to a character array

        char* model; //(modell) - pointer to a charcter array

        int year; //(årsmodell)
        
        double mileage; //(mätarställnig)

        

        //– ökar mileage med ett visst avstånd.

        void drive(double distance) {

            mileage += distance;

            std::cout << "mileage is  " << mileage << " now!" << std::endl; 

        }

        

        //– skriver ut information om bilen, inklusive märke, modell, årsmodell och mätarställning.

        void displayInfo() {

            std::cout << "Information of this car..."  << std::endl;

            std::cout << "Brand: " << brand << std::endl;

            std::cout << "Model: " << model << std::endl;

            std::cout << "Year: " << year << std::endl;

            std::cout << "Mileage: " << mileage << std::endl;

            

        } 

        

        //– returnerar årsmodellen.

        int getYear() {

            return year;

        }

        

        //– returnerar mätarställningen.

        double getMileage() {

            return mileage;

        }

        

        

    // Constructor with safer memory allocation

    Car(const char* brand, const char* model, int year, double mileage) {

        //initierar medlemsvariablerna med dessa värden.

        this ->brand = new char[strlen(brand) + 1]; // Allocate memory for brand
        strcpy(this ->brand, brand);               // Copy brand string
        
        this ->model = new char[strlen(model) + 1];
        strcpy(this ->model, model);

        this ->year = year;
        this ->mileage = mileage;

    }
    ~Car() {
        delete[] brand; // Deallocate memory for brand
        delete[] model; // Deallocate memory for model
    }
    
};

    

int main() {
    Car car1("Toyota", "Corola", 1988, 33.33 );
  
    car1.drive(44.44);
    car1.displayInfo();

    std::cout << "Year of model is: " << car1.getYear() << std::endl;
    std::cout << "Mileage is: " << car1.getMileage() << std::endl;

    return 0;
}