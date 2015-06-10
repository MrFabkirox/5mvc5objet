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
			$this->vueListe->display($this->model);
		}

	}

	echo('!ListeProduits!');

?>