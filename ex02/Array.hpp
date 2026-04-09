
template <typename T>
class Array {
	private:
		T *_arr;
		size_t _len;

	public:
		Array() :_len(0) {
			this->_arr = new T[]();
		};
		Array(unsigned int n) :_len(n) {
			this->_arr = new T[n]();
		}
		~Array() {
			delete[] _arr;
		}
		Array(const Array &a) :_len(a._len) {
			size_t n;

			n = a._len;
			this->_len = n;
			this->_arr = new T[n]();
			for (size_t i = 0; i < n) {
				this->_arr[i] = a._arr[i];
			}
		}
		size_t size() const {
			return (this->len);
		}
};
