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

		char* log() {
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
}
#endif
//Scipp element class