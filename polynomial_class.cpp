class Polynomial {

public :

    int *degCoeff;      // Name of your array (Don't change this)

    int capacity;           // total size

public :

 Polynomial() {

        degCoeff = new int[10]; // Initialize the array with size 10

         for(int i=0;i<10;i++)degCoeff[i]=0;// Set all coefficients to 0

        capacity = 10;// Set the initial capacity to 10

    }

    // Copy constructor

 

     Polynomial(const Polynomial &d) {

        this -> degCoeff = new int[d.capacity];

        for(int i = 0; i < d.capacity; i++) {

            this -> degCoeff[i] = d.degCoeff[i];

        }

        this -> capacity = d.capacity;

    }

        // Function to set the coefficient of a particular degree

 

   void setCoefficient(int deg,int coeff) {

          if(deg>=capacity)

          {

              //int size = this->capacity;

             int size=deg+1;

              int *newarr = new int[size];

                          // Copy the old coefficients to the new array

 

              for(int i=0;i<capacity;i++)newarr[i]=this->degCoeff[i];

                         // Set the remaining coefficients to 0

 

              for(int i=capacity;i<size;i++)newarr[i]=0;

              delete[] this->degCoeff;// Delete the old array

              this->degCoeff=newarr;// Point to the new array

              this->capacity = size;

          }

          this->degCoeff[deg]=coeff;

    }

    // Complete the class

        // Function to print the polynomial

 

    void print() {

        for(int i = 0;i<capacity;i++) {

            if(degCoeff[i])

            cout << degCoeff[i] << "x" <<i << " ";

        }

        cout << endl;

    }

        // Overloading the + operator to add two polynomials

 

    Polynomial operator+(Polynomial &p) {

        Polynomial newP;

        newP.capacity = max(p.capacity,capacity);

        newP.degCoeff = new int[newP.capacity];

                // Adding the coefficients at corresponding degrees

 

        if (capacity<p.capacity) {

            int k;

            for (k=0;k<capacity;k++) {

                newP.degCoeff[k]=degCoeff[k]+p.degCoeff[k];

            }

            for (;k<p.capacity;k++) {

                newP.degCoeff[k]=p.degCoeff[k];

            }

        } else {

            int k;

            for ( k=0;k<p.capacity;k++) {

                newP.degCoeff[k]=degCoeff[k]+p.degCoeff[k];

            }

            for (;k<capacity;k++) {

                newP.degCoeff[k]=degCoeff[k] ;

            }

        }

        return newP;

    }

        // Overloading the - operator to subtract two polynomials

 

    Polynomial operator-(Polynomial &p) {

        Polynomial newP;

        newP.capacity = max(capacity,p.capacity);

        newP.degCoeff = new int[newP.capacity];

                // Subtracting the coefficients at corresponding degrees

 

        if (capacity<p.capacity) {

            int k;

            for (k=0;k<capacity;k++) {

                newP.degCoeff[k]=degCoeff[k]-p.degCoeff[k];

            }

            for (;k<p.capacity;k++) {

                newP.degCoeff[k]=-p.degCoeff[k];

            }

        } else {

            int k;

            for ( k=0;k<p.capacity;k++) {

                newP.degCoeff[k]=degCoeff[k]-p.degCoeff[k];

            }

            for (;k<capacity;k++) {

                newP.degCoeff[k]=degCoeff[k] ;

            }

        }

        return newP;

    }

        // Overloading the * operator to multiply two polynomials

 

    Polynomial operator*(Polynomial const &p) {

        Polynomial newP;

        newP.capacity = p.capacity+capacity;

        newP.degCoeff = new int[newP.capacity];

                // Initialize all coefficients of the new polynomial to 0

 

        for(int i=0;i<newP.capacity;i++)

            newP.degCoeff[i]=0;

        

        for (int i=0;i<capacity;i++) {

            for (int j=0;j<p.capacity;j++) {

                newP.degCoeff[i+j] += degCoeff[i]*p.degCoeff[j];

            }

        }

        return newP;

    }

    Polynomial operator=(Polynomial const &d) {

        this -> degCoeff = new int[d.capacity];

        for(int i = 0; i < d.capacity; i++) {

            this -> degCoeff[i] = d.degCoeff[i];

        }

        this -> capacity = d.capacity;

        return *this;

    }

    

};
