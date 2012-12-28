/*
 * CCSDSSpacePacketException.hh
 *
 *  Created on: Jun 14, 2011
 *      Author: yuasa
 */

#ifndef CCSDSSPACEPACKETEXCEPTION_HH_
#define CCSDSSPACEPACKETEXCEPTION_HH_


/** An exception class used by the CCSDSSpacePacket class.
 */
class CCSDSSpacePacketException {
public:
	enum {
		NotACCSDSSpacePacket = 0x01, //
		SecondaryHeaderTooShort = 0x10,

	};
public:
	uint32_t status;

public:
	/** Returns exception status.
	 * @returns exception status.
	 */
	uint32_t getStatus() const {
		return status;
	}

public:
	/** Sets exception status.
	 * @param[in] status exception status.
	 */
	void setStatus(uint32_t status) {
		this->status = status;
	}

public:
	/** Constructs an instance with an exception status.
	 * @param[in] status exception status.
	 */
	CCSDSSpacePacketException(uint32_t status) {
		this->status = status;
	}

};
#endif /* CCSDSSPACEPACKETEXCEPTION_HH_ */
