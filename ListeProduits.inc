<?php
//ListeProduits

	class ListeProduits {
		public $model = array();
		public $vueListe;

		public function __construct() {

			$db = new DBHandle();
			$this->model = $db->getData();

		}

		function affiche() {

			$this->vueListe = new VueListe();
			display($this->model);
		}

	}

	echo('!ListeProduits!');

?>