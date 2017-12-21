<?php
/**
 * @file
 * Definition of EntityDailyReportMigration.
 */
class EntityDailyReportMigration extends Migration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $options = array();
        $options['header_rows'] = 1;
        $options['delimiter'] = ",";

        $columns = array(
            0 => array('cha', 'Total chemo appointment added yesterday'),
            1 => array('date', 'The date chemo apps were processed'),
            2 => array('chp', 'Total chemo appointment processed yesterday'),
            3 => array('date2', 'The date chemo apps were completed'),
            4 => array('chc', 'Total chemo appointment completed yesterday'),
            5 => array('date3', 'The date chemo apps were added'),
            6 => array('moa', 'Total medonc appointment added yesterday'),
            7 => array('date4', 'The date medonc apps were processed'),
            8 => array('mop', 'Total medonc appointment processed yesterday'),
            9 => array('date5', 'The date medonc apps were completed'),
            10 => array('moc', 'Total medonc appointment completed yesterday'),
            11 => array('date6', 'The date radonc apps were added'),
            12 => array('roa', 'Total radonc appointment added yesterday'),
            13 => array('date7', 'The date radonc apps were processed'),
            14 => array('rop', 'Total radonc appointment processed yesterday'),
            15 => array('date8', 'The date radonc apps were completed'),
            16 => array('roc', 'Total radonc appointment completed yesterday'),
            17 => array('date9', 'The date medicare apps were added'),
            18 => array('mdca', 'Total medicare appointment added yesterday'),
            29 => array('date10', 'The medicare date apps were processed'),
            20 => array('mdcp', 'Total medicare appointment processed yesterday'),
            21 => array('date11', 'The date medicare apps were completed'),
            22 => array('mdcc', 'Total medicare appointment completed yesterday'),
            23 => array('date1', 'The date medicare apps were completed'),
            24 => array('pk', 'A random primary key needed for migration')
        );

        $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/export_import/agg.csv';

        $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
        $this->body = t('CSV Chemo Processed Total Appointments on Date');

        $this->destination = new MigrateDestinationEntityAPI('daily_report','daily_report');

        // Tell Migrate the unique IDs for this migration live - watch for multiple appts.
        $source_key_schema = array('cha' => array(
            'type' => 'pk',
            'unsigned' => TRUE,
            'not null' => TRUE,
        ),
        );

        $this->map = new MigrateSQLMap($this->machineName,
            $source_key_schema,
            $this->destination->getKeySchema('daily_report')
        );

        $this->addFieldMapping('field_date','date'); // may need to work on
        $this->addFieldMapping('field_chemo_added', 'cha');
        $this->addFieldMapping('field_chemo_processed', 'chp');
        $this->addFieldMapping('field_chemo_completed', 'chc');
        $this->addFieldMapping('field_medonc_added', 'moa');
        $this->addFieldMapping('field_medonc_processed', 'mop');
        $this->addFieldMapping('field_medonc_completed', 'moc');
        $this->addFieldMapping('field_radonc_added', 'roa');
        $this->addFieldMapping('field_radonc_processed', 'rop');
        $this->addFieldMapping('field_radonc_completed', 'roc');
        $this->addFieldMapping('field_medicare_added', 'mdca');
        $this->addFieldMapping('field_medicare_processed', 'mdcp');
        $this->addFieldMapping('field_medicare_completed', 'mdcc');

        $this->addUnmigratedSources(array(
            'date1',
            'date2',
            'date3',
            'date4',
            'date5',
            'date6',
            'date7',
            'date8',
            'date9',
            'date10',
            'date11',
        ));
        $this->addUnmigratedDestinations(array(
            'path',
            'field_date:timezone',//   Timezone
            'field_date:rrule',  //        Recurring event rule
            'field_date:to',     //	End date date
        ));
    }
    /**
     * Prepare a proper unique key.
     */
    public function prepareKey($key, $row) {
        $key = array();
        $row->pk = rand(1,$row->cha);
        $key['orc_id_drug'] = $row->pk;
        return $key;
    }
    public function prepareRow($row) {

        parent::prepareRow($row);
        //date
        if(preg_match('/\d+\/\d+\/\d+/',$row->date, $matches)){
            $row->date = $row->date . ' 12:00:00 PM';
        }else{
            $row->date = date("Y-m-d"); // set to today's date, as no records were added today.
        }

    }

}




