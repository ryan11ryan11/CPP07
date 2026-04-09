
template <typename T>
class Array {
	private:
		T *_arr;
		size_t len;

	public:
		Array() {
			this->_arr = new T[]();
		};
		Array(unsigned int n) {
			this->_arr = new T[n]();
		}
		~Array() {
			delete[] _arr;
		}
		Array(const Array &a) {
			size_t len = 0;
			while(a._arr[len]) {
				len ++;
			}
			this->_arr = new T[n]();
			for (size_t i = 0; i < len; i++) {

			}
			while(a._arr[i]) {
				this->_arr[i] = a._arr[i];
				i ++;
			}
			this->_arr = temp;
		}
		size_t size() {
			return (this->len);
		}
};
