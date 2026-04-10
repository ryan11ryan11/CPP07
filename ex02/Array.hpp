#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef> // size_t
#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
	private:
		T *_arr;
		size_t _len;

	public:
		Array() :_len(0) {
			this->_arr = new T[0]();
		}
		Array(unsigned int n) :_len(n) {
			this->_arr = new T[n]();
		}
		~Array() {
			delete[] _arr;
		}
		Array(const Array &a) :_len(a._len) {
			this->_arr = new T[this->_len]();
			for (size_t i = 0; i < this->_len; i ++) {
				this->_arr[i] = a._arr[i];
			}
		}
		Array& operator=(const Array &a) {
			if (this == &a) {
				return *this;
			}
			delete[] this->_arr;
			this->_len = a.size();
			this->_arr = new T[this->_len]();
			for (size_t i = 0; i < this->_len; i ++) {
				this->_arr[i] = a._arr[i];
			}
			return *this;
		}
		T& operator[](const size_t index) {
			if (index >= this->_len) {
				throw std::out_of_range("Index out of bounds");
			}
			return (this->_arr[index]);
		}
		const T& operator[](const size_t index) const{
			if (index >= this->_len) {
				throw std::out_of_range("Index out of bounds");
			}
			return (this->_arr[index]);
		}

		size_t size() const {
			return (this->_len);
		}
		void printAll() {
			std::cout << "[";
			for (size_t i = 0; i < this->_len; i++) {
				std::cout << this->_arr[i] << " ";
			}
			std::cout << "]" << std::endl;
		}
};

#endif
