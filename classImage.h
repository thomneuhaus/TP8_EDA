

class image{
	public:
	toggleSelection();
	loadBitmap();
	draw(...); // hay que pensar que parametros pasarle
	getFileName();
	isSelected();
	private:
	string Filename;
	ALLEGRO_BITMAP *bitmap;
	bool selected; // marca si esta seleccionado o no

};