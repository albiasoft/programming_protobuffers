<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto3/company.proto

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>Company</code>
 */
class Company extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>uint32 id = 1;</code>
     */
    protected $id = 0;
    /**
     * Generated from protobuf field <code>string name = 2;</code>
     */
    protected $name = '';
    /**
     * Generated from protobuf field <code>string description = 3;</code>
     */
    protected $description = '';
    /**
     * Generated from protobuf field <code>.Company.CompanyCategory category = 4;</code>
     */
    protected $category = 0;
    /**
     * Generated from protobuf field <code>uint32 employees = 5;</code>
     */
    protected $employees = 0;
    /**
     * Generated from protobuf field <code>bool active = 6;</code>
     */
    protected $active = false;
    /**
     * Generated from protobuf field <code>bytes logo = 7;</code>
     */
    protected $logo = '';
    /**
     * Generated from protobuf field <code>.google.protobuf.Timestamp created = 8;</code>
     */
    protected $created = null;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type int $id
     *     @type string $name
     *     @type string $description
     *     @type int $category
     *     @type int $employees
     *     @type bool $active
     *     @type string $logo
     *     @type \Google\Protobuf\Timestamp $created
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\Proto3\Company::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>uint32 id = 1;</code>
     * @return int
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Generated from protobuf field <code>uint32 id = 1;</code>
     * @param int $var
     * @return $this
     */
    public function setId($var)
    {
        GPBUtil::checkUint32($var);
        $this->id = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string name = 2;</code>
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Generated from protobuf field <code>string name = 2;</code>
     * @param string $var
     * @return $this
     */
    public function setName($var)
    {
        GPBUtil::checkString($var, True);
        $this->name = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string description = 3;</code>
     * @return string
     */
    public function getDescription()
    {
        return $this->description;
    }

    /**
     * Generated from protobuf field <code>string description = 3;</code>
     * @param string $var
     * @return $this
     */
    public function setDescription($var)
    {
        GPBUtil::checkString($var, True);
        $this->description = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.Company.CompanyCategory category = 4;</code>
     * @return int
     */
    public function getCategory()
    {
        return $this->category;
    }

    /**
     * Generated from protobuf field <code>.Company.CompanyCategory category = 4;</code>
     * @param int $var
     * @return $this
     */
    public function setCategory($var)
    {
        GPBUtil::checkEnum($var, \Company_CompanyCategory::class);
        $this->category = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>uint32 employees = 5;</code>
     * @return int
     */
    public function getEmployees()
    {
        return $this->employees;
    }

    /**
     * Generated from protobuf field <code>uint32 employees = 5;</code>
     * @param int $var
     * @return $this
     */
    public function setEmployees($var)
    {
        GPBUtil::checkUint32($var);
        $this->employees = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>bool active = 6;</code>
     * @return bool
     */
    public function getActive()
    {
        return $this->active;
    }

    /**
     * Generated from protobuf field <code>bool active = 6;</code>
     * @param bool $var
     * @return $this
     */
    public function setActive($var)
    {
        GPBUtil::checkBool($var);
        $this->active = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>bytes logo = 7;</code>
     * @return string
     */
    public function getLogo()
    {
        return $this->logo;
    }

    /**
     * Generated from protobuf field <code>bytes logo = 7;</code>
     * @param string $var
     * @return $this
     */
    public function setLogo($var)
    {
        GPBUtil::checkString($var, False);
        $this->logo = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.Timestamp created = 8;</code>
     * @return \Google\Protobuf\Timestamp
     */
    public function getCreated()
    {
        return $this->created;
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.Timestamp created = 8;</code>
     * @param \Google\Protobuf\Timestamp $var
     * @return $this
     */
    public function setCreated($var)
    {
        GPBUtil::checkMessage($var, \Google\Protobuf\Timestamp::class);
        $this->created = $var;

        return $this;
    }

}
