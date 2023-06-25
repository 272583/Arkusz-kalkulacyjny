#include <typeinfo>
template<typename T>
class Field {
   public:
   Field(T val) : m_value(val) {}

    void setValue(T value) {
        this->m_value = value;
    }

    // Method to extract the value
    T getValue() {
        return m_value;
    }
 
    // Method to get the type of the value
    std::string getType() {
        return typeid(value).name();
    }

   private:
   T m_value;

};




template<typename T>
// a template for creating a method add values of two fields.
T add(field1, field2){
    return field1.getValue() + field2.getValue();
}


// a template for creating a method to add all the values between two fields.
T add_all(field1, field2){
    T sum;
    for(int field1_x; field2_x; i++){
        for(int field1_y; field2_y; j++){
            sum += field[i][j];
        }
    }
    return sum;
};