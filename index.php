<?php

class MyClassLoader
{
  public static function loadClass($class){

    require "CLASS_$class.inc";
  }
}

spl_autoload_register('MyClassLoader::loadClass');


$listControler = new ListeProduits();
?>

<!DOCTYPE HTML>
<html>
<head>
  <title>5mvc5objet</title>
  <meta charset="utf-8"/>
<style>
	#left {
		width: 75%;
		position: fixed;
	}
	#right {
		width: 25%;
		position: absolute;
		right: 0;
		background: grey;
		margin: 20px;
		padding: 4px;
	}
</style>
<script></script>

</head>
<body>

<div id="right"><?php include("menu.php"); ?></div>

<div id="left">

<h3>5mvc5objet, index</h3>

<p>let s do this</p>


<?php

	$listControler->affiche();

	echo('!index!');

?>


</div>

</body>
</html>