/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class LoopEnsureStruct implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("LoopEnsureStruct");
  private static final TField BAR_FIELD_DESC = new TField("bar", TType.STRUCT, (short)-1);

  public final Bar bar;
  public static final int BAR = -1;

  public LoopEnsureStruct(
      Bar bar) {
    this.bar = bar;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public LoopEnsureStruct(LoopEnsureStruct other) {
    if (other.isSetBar()) {
      this.bar = TBaseHelper.deepCopy(other.bar);
    } else {
      this.bar = null;
    }
  }

  public LoopEnsureStruct deepCopy() {
    return new LoopEnsureStruct(this);
  }

  public Bar getBar() {
    return this.bar;
  }

  // Returns true if field bar is set (has been assigned a value) and false otherwise
  public boolean isSetBar() {
    return this.bar != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof LoopEnsureStruct))
      return false;
    LoopEnsureStruct that = (LoopEnsureStruct)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetBar(), that.isSetBar(), this.bar, that.bar)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {bar});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static LoopEnsureStruct deserialize(TProtocol iprot) throws TException {
    Bar tmp_bar = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case BAR:
          if (__field.type == TType.STRUCT) {
            tmp_bar = Bar.deserialize(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    LoopEnsureStruct _that;
    _that = new LoopEnsureStruct(
      tmp_bar
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.bar != null) {
      if (isSetBar()) {
        oprot.writeFieldBegin(BAR_FIELD_DESC);
        this.bar.write(oprot);
        oprot.writeFieldEnd();
      }
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

