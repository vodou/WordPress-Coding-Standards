<?php

$posts = get_posts( 'cat=3' );
// Bad, no operator spacing.
for ( $i=0; $i<sizeof( $posts ); $i++ ) {
	// ...
}

// Good.
for ( $i = 0; $i < sizeof( $posts ); $i++ ) {
	// ...
}
// Good.
if ( ! $var ) {
	// ...
}
// Bad.
if ( !$var ) {
	// ...
}

while ( have_posts() ) {
	$ok = (
		! is_author()
		||
		is_front_page()
	);
}

// All OK.
if ( 'bb' !== 'bb' ) {
	if (
		empty($_GET['refid']) &&
		empty($_GET['nolinks']) &&
		! is_page_template('page_strategy-center.php') &&
		! is_page_template('page_confirmation.php') &&
		! is_page_template('page_debartolo.php') &&
		! is_singular('offer')
	) {
		hello();
	}
}

// Bad.
for ( $i =  0; $i < sizeof( $posts ); $i++ ) {
	// ...
}
// Bad.
if (  ! $var ) {
	// ...
}

// Ok: Test skipping of default values in function declarations.
function my_test( $a=true, $b = 123, $c=  'string' ) {}
$a = function ( $a=true, $b = 123, $c=  'string' ) {};

// Upstream issue 1163.
declare(strict_types=1);
