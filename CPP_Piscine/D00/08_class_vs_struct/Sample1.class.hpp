#ifndef SAMPLE1_CLASS_HPP
# define SAMPLE1_CLASS_HPP

struct Sample1 {

	//struct is public by default
	int		foo;

	Sample1( void );
	~Sample1( void );

	void	bar( void ) const;
};

#endif