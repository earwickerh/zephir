namespace Test;

class Issue1521
{
	public params;

	public function test()
	{
		let this->params = [
			"merchantNumber":"0818217122"
		];

		return this->params["merchantNumber"];
	}
}
