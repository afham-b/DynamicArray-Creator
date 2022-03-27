#pragma once

template <typename T>
class DynArray {
  private: 
     T *p_values; 
    int capacity; 
    int cur_size; 
    void expand (int new_capacity);   
  public:
    DynArray(); 
    DynArray(int size); 
    ~DynArray() {delete[] p_values; }
    int size() const { return cur_size;} 
    void append (T value); 
    void set (int pos, T value) {p_values[pos] = value;}
    T get(int pos) const {return p_values[pos];}
    void insert( int pos, T value); 
    void remove( int pos); 
    void resize (int size); 
};

template<typename T>
DynArray<T>:: DynArray () {
  p_values = new T[10];
  capacity = 10; 
  cur_size = 0; 
}

template<typename T>
DynArray<T>:: DynArray (int size){
  p_values = new T[size];
  capacity = size; 
  cur_size = 0; 
}

template<typename T> 
void DynArray<T>::append(T value) { 
  if (cur_size == capacity) 
     expand (capacity+10); 
  p_values[cur_size] = value;  
  cur_size++; 
}

template<typename T> 
void DynArray<T>::expand(int new_capacity) {
    if (new_capacity <= capacity)
        return;
    T *p = p_values;
    capacity = new_capacity;
    p_values = new T[capacity];
    for (int i = 0; i < size(); i++)
        p_values[i] = p[i];
    delete[] p;
}

template <typename T>
void DynArray<T>::insert(int pos, T value) { 
  T *p = p_values;
  cur_size++;             
  if (cur_size == capacity){
     expand (capacity+10);}    
  p_values = new T[capacity];  
  
  for (int i=0; i<pos; i++){  
    p_values[i]=p[i];              
  }
  for (int i=(pos+1); i<cur_size; i++){
    p_values[i]=p[i-1]; 
  }
  p_values[pos] = value; 
  delete[] p;
} 

template<typename T>
void DynArray<T>::remove(int pos){
  T *p = p_values;
  p_values = new T[capacity];
  for (int i=0; i<pos; i++){  
    p_values[i]=p[i];              
  }
  for (int i=(pos); i<cur_size; i++){
    p_values[i]=p[i+1]; 
  }
  cur_size --; 
  delete[] p;
}

template<typename T>
void DynArray<T>::resize (int size){ 

  if (size ==cur_size) {
    return; }
  if (size > capacity) {
		expand(size);}
  if (size < cur_size) {
      do {
        remove(cur_size-1);
      } while ( cur_size!= size);}
}