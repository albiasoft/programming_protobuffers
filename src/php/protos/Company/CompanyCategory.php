<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto3/company.proto

namespace Company;

use UnexpectedValueException;

/**
 * Protobuf type <code>Company.CompanyCategory</code>
 */
class CompanyCategory
{
    /**
     * Generated from protobuf enum <code>AGRICULTURE = 0;</code>
     */
    const AGRICULTURE = 0;
    /**
     * Generated from protobuf enum <code>ARTS = 1;</code>
     */
    const ARTS = 1;
    /**
     * Generated from protobuf enum <code>CONSTRUCTION = 2;</code>
     */
    const CONSTRUCTION = 2;
    /**
     * Generated from protobuf enum <code>EDUCATIONAL = 3;</code>
     */
    const EDUCATIONAL = 3;
    /**
     * Generated from protobuf enum <code>FINANCE = 4;</code>
     */
    const FINANCE = 4;
    /**
     * Generated from protobuf enum <code>HIGHTECH = 5;</code>
     */
    const HIGHTECH = 5;
    /**
     * Generated from protobuf enum <code>LEGAL = 6;</code>
     */
    const LEGAL = 6;
    /**
     * Generated from protobuf enum <code>MANUFACTURING = 7;</code>
     */
    const MANUFACTURING = 7;
    /**
     * Generated from protobuf enum <code>MEDICAL = 8;</code>
     */
    const MEDICAL = 8;
    /**
     * Generated from protobuf enum <code>NON_PROFIT = 9;</code>
     */
    const NON_PROFIT = 9;

    private static $valueToName = [
        self::AGRICULTURE => 'AGRICULTURE',
        self::ARTS => 'ARTS',
        self::CONSTRUCTION => 'CONSTRUCTION',
        self::EDUCATIONAL => 'EDUCATIONAL',
        self::FINANCE => 'FINANCE',
        self::HIGHTECH => 'HIGHTECH',
        self::LEGAL => 'LEGAL',
        self::MANUFACTURING => 'MANUFACTURING',
        self::MEDICAL => 'MEDICAL',
        self::NON_PROFIT => 'NON_PROFIT',
    ];

    public static function name($value)
    {
        if (!isset(self::$valueToName[$value])) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no name defined for value %s', __CLASS__, $value));
        }
        return self::$valueToName[$value];
    }


    public static function value($name)
    {
        $const = __CLASS__ . '::' . strtoupper($name);
        if (!defined($const)) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no value defined for name %s', __CLASS__, $name));
        }
        return constant($const);
    }
}

// Adding a class alias for backwards compatibility with the previous class name.
class_alias(CompanyCategory::class, \Company_CompanyCategory::class);

