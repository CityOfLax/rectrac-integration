<?php
/**
 * @copyright 2012-2013 City of Bloomington, Indiana
 * @license http://www.gnu.org/licenses/agpl.txt GNU/AGPL, see LICENSE.txt
 * @author Cliff Ingham <inghamn@bloomington.in.gov>
 */
namespace Application\Controllers;

use Application\Models\ActivityGateway;
use Blossom\Classes\Block;
use Blossom\Classes\Controller;

class ActivitiesController extends Controller
{
	public function index()
	{
        $list = ActivityGateway::find($_GET);
        $this->template->blocks[] = new Block('activities/list.inc', ['activities'=>$list]);
	}
}
