#ifndef SAMPLE2_CLASS_HPP
# define SAMPLE2_CLASS_HPP

class Sample2 {

	//class is private by default even without mentioning that
	int		foo;

	Sample2( void );
	~Sample2( void );

	void	bar( void ) const;
};

#endif