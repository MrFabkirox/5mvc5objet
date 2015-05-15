<?php
//VueListe

	class VueListe {

		public function __construct() {

		}

		function displayModel($list) {
			//PHP Fatal error:  Call to undefined function displayModel() in /var/www/html/5mvc5objet/ListeProduits.inc on line 18
			echo('<ul>');
			foreach ($list as $line) {
				echo('<li>'.$line->getDesignation().'</li>');
			}
			echo('</ul>');
		}

	}

	echo('!VueListe!');

?>