#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {

public:

	int		publicFoo;

	Sample( void );
	~Sample( void );

	void	publicBar( void ) const;


private:

	int		privateFoo_;

	void	privateBar_( void ) const;
	
};

#endif