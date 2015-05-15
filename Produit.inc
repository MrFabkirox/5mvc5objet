<?php
//Produit

	class Produit {
		private $id;
		private $Designation;
		private $prix;

		public function getId() {
			return $this->id;
		}

		public function getDesignation() {
			return $this->Designation;
		}

		public function getPrix() {
			return $this->prix;
		}

	}

	echo('!Produit!');

?>