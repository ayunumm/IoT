#include <iostream>
#include <cstring>


class Car {

    public:
            
        char* brand; //(märke) - pointer to a character array
        char* model; //(modell) - pointer to a charcter array
        int year; //(årsmodell)
        double mileage; //(mätarställnig)

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



        // Copy constructor
        // Constructor Signature: Car(const Car& other) indicates a copy 
        // constructor that takes a constant reference to a Car object (other).
        Car(const Car& other) {
            size_t brandLen = strlen(other.brand) + 1; // Size for brand including null terminator
            size_t modelLen = strlen(other.model) + 1; // Size for model including null terminator

            this ->brand = new char[brandLen];
            strcpy(this ->brand, other.brand);

            this ->model = new char[modelLen];
            strcpy(this ->model, other.model);

            this->year = other.year;
            this->mileage = other.mileage;
        }       

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
};
    

int main() {
    Car car1("Toyota", "Corola", 1988, 33.33 );
    Car car2(car1); // Copy constructor called here

    car1.drive(44.44);
    car2.drive(10.00);
    
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}