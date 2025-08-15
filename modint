template<_T MOD,typename _T=int>
	struct modint{
		_T val;
		modint<MOD>(_T x){
			val=x%MOD;
		}
		modint(){
			val=0;
		}
		modint<MOD> operator+(const modint<MOD> & a)const{
			return modint<MOD>((val+a.val)%MOD);
		}
		modint<MOD> operator-(const modint<MOD> & a)const{
			return modint<MOD>((val-a.val+MOD)%MOD);
		}
		modint<MOD> operator-()const{
			return modint<MOD>((-val+MOD)%MOD);
		}
		modint<MOD> operator*(const modint<MOD> & a)const{
			return modint<MOD>((val*a.val)%MOD);
		}
		modint<MOD> operator=(const modint<MOD> & a){
			val=a.val;
			return modint<MOD>(val);
		}
	};
