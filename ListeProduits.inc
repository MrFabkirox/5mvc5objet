<?php
//ListeProduits

	class ListeProduits {
		public $vue = array();
		public $model = array();

		public function __construct() {

			$this->vue[] = new VueListe($this);
			$db = new DBHandle();
			$this->model = $db->getDataDb();

		}

		public function affiche() {

			echo('<ul>');
			foreach ($this->model as $line) {
				echo('<li>'.$line->getDesignation().'</li>');
			}
			echo('</ul>');

		}


	}

	echo('!ListeProduits!');

?>