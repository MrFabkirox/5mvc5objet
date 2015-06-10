<?php
//VueListe

	class VueListe {

		function display($list) {

			echo('<ul>');
			foreach($list as $line) {
				echo('<li>'.$line->getDesignation().'</li>');
			}
			echo('</ul>');

		}

	}
		echo('!VueListe!');

?>