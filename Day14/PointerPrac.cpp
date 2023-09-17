
#include <iostream>


struct myVector {
public:

  int size;
  int capacity;
  double* data;

private:

};

float arrayModSum(myVector& someVar) {

  //sum
  float sum = 0;

  for (int i = 0; i < someVar.size; i++){
    someVar.data[i] += 1.0;
    sum += someVar.data[i];
  }

  return sum;

}


void growMyVector(myVector& someVar){
  if (someVar.size == someVar.capacity){

    someVar.capacity = someVar.capacity * 2;
    // 1. Dynamically allocate memory for a temporary array that is twice the size of the original. This will require a double *.
    double * tempArray = new double[someVar.capacity];

    for (int i = 0; i <= 20; i++){
      tempArray[i] = -1.0;
    }
    // 2. Copy the contents over from someVar.data to this temp array by looping over the temp array.
    for (int i = 0; i < someVar.size; i++){
      tempArray[i] = someVar.data[i];
    }
    // 3. Call delete[] on someVar.data to free up the old chunk of memory.
    delete[] someVar.data;
    // 4. Set someVar.data = the pointer to the temp array.
    someVar.data = tempArray;
    // 5. Set the pointer to the temp array to nullptr.
    tempArray = nullptr;

  }
}

int main(int argc, char const *argv[]) {

//vec1 is of type myVector in my struct declared in the beginning. this is used to manipulate the size of the array later
myVector vec1;

//setting a double array pointer that calls for new space in the heap
double* arrayTest = new double[10];

vec1.capacity = 10;

vec1.data = arrayTest;

//current element inside the array
vec1.size = 0;

for (int i = 0; i < vec1.capacity; i++){
  vec1.size++;
  arrayTest[i] = 1.0;
}

std::cout << "\n" << arrayModSum(vec1) << "\n";

growMyVector(vec1);

for (int i = 0; i < vec1.capacity; i++){
std::cout << vec1.data[i] << "\n";
}

delete[] vec1.data;
vec1.data = nullptr;





  return 0;
}
