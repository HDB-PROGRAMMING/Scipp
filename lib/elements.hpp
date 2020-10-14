#ifndef SCIPP_ELEMENTS
#define SCIPP_ELEMENTS

namespace elements {
	class element {
	protected:
		string name;
		string symbol;
		int atomic_number;
		string description;
		//Element details

		byte acidity;
		int heat_power;
		int radioactivity;
		//Element propierties

	public:
		element(string _name, string _symbol, int _atomic_number, string _description) :
			name(_name), symbol(_symbol), atomic_number(_atomic_number), description(_description) {
			this->acidity = 0;
			this->heat_power = 0;
			this->radioactivity = 0;
		}
		//Element constructor

		string get_name        () { return this->name; }
		string get_symbol      () { return this->symbol; }
		int get_atomic_number  () { return this->atomic_number; }
		string get_description () { return this->description; }

		byte get_acidity      () { return this->acidity; }
		int get_heat_power    () { return this->heat_power; }
		int get_radioactivity () { return this->radioactivity; }


		void set_description   (string _description) { this->description = _description; }
		void set_acidity       (byte _acidity)       { this->acidity = _acidity; }
		void set_heat_power    (int _heat_power)     { this->heat_power = _heat_power; }
		void set_radioactivity (int _radioactivity) {  this->radioactivity = _radioactivity; }
		//Getters and setters

		str log() {
			char* logout;

			sprintf(
				logout,

				//Output text skeleton
				"==DETAILS==\n\
				Name:          %s,\n\
				Symbol:        %s,\n\
				Atomic number: %d,\n\
				Description:   %s,\n\
				\n\
				==PROPIERTIES==\n\
				Acidity:       %d,\n\
				Heat Power:    %d,\n\
				Radioactivity: %d\n",

				//Element details
				this->name,
				this->symbol,
				this->atomic_number,
				this->description,

				//Element propierties
				this->acidity,
				this->heat_power,
				this->radioactivity
			);

			return logout;
		}
		//Element logout	
	};

	class elCollection {
	protected:
		list<element> elements;

	public:
		elCollection(element* elements) {
			for (int i = 0; i != NULL; i++) {
				this->elements.push_back(elements[i]);
			}
		}
		//elCollection constructor

		element get_element_by_name(string _name) {
			/*list<element> ::iterator i;
			element e;

			for (i = this->elements.begin(); i != this->elements.end(); i++) {
				e = *i;

				if (e.get_name() == _name) {
					return e;
				}
			}*/
		}
	};
}
#endif
//Scipp element class