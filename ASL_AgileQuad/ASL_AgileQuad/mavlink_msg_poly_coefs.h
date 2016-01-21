// MESSAGE POLY_COEFS PACKING

#define MAVLINK_MSG_ID_POLY_COEFS 150

typedef struct __mavlink_poly_coefs_t
{
 float del_t; ///< The length of time polynomial is valid.
 float p_0; ///< Zero order coefficient.
 float p_1; ///< First order coefficient.
 float p_2; ///< Second order coefficient.
 float p_3; ///< Third order coefficient.
 float p_4; ///< Fourth order coefficient.
 float p_5; ///< Fifth order coefficient.
 float p_6; ///< Sixth order coefficient.
 float p_7; ///< Seventh order coefficient.
 float p_8; ///< Eigth order coefficient.
 float p_9; ///< Ninth order coefficient.
} mavlink_poly_coefs_t;

#define MAVLINK_MSG_ID_POLY_COEFS_LEN 44
#define MAVLINK_MSG_ID_150_LEN 44

#define MAVLINK_MSG_ID_POLY_COEFS_CRC 246
#define MAVLINK_MSG_ID_150_CRC 246



#define MAVLINK_MESSAGE_INFO_POLY_COEFS { \
	"POLY_COEFS", \
	11, \
	{  { "del_t", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_poly_coefs_t, del_t) }, \
         { "p_0", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_poly_coefs_t, p_0) }, \
         { "p_1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_poly_coefs_t, p_1) }, \
         { "p_2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_poly_coefs_t, p_2) }, \
         { "p_3", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_poly_coefs_t, p_3) }, \
         { "p_4", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_poly_coefs_t, p_4) }, \
         { "p_5", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_poly_coefs_t, p_5) }, \
         { "p_6", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_poly_coefs_t, p_6) }, \
         { "p_7", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_poly_coefs_t, p_7) }, \
         { "p_8", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_poly_coefs_t, p_8) }, \
         { "p_9", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_poly_coefs_t, p_9) }, \
         } \
}


/**
 * @brief Pack a poly_coefs message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param del_t The length of time polynomial is valid.
 * @param p_0 Zero order coefficient.
 * @param p_1 First order coefficient.
 * @param p_2 Second order coefficient.
 * @param p_3 Third order coefficient.
 * @param p_4 Fourth order coefficient.
 * @param p_5 Fifth order coefficient.
 * @param p_6 Sixth order coefficient.
 * @param p_7 Seventh order coefficient.
 * @param p_8 Eigth order coefficient.
 * @param p_9 Ninth order coefficient.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_poly_coefs_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float del_t, float p_0, float p_1, float p_2, float p_3, float p_4, float p_5, float p_6, float p_7, float p_8, float p_9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POLY_COEFS_LEN];
	_mav_put_float(buf, 0, del_t);
	_mav_put_float(buf, 4, p_0);
	_mav_put_float(buf, 8, p_1);
	_mav_put_float(buf, 12, p_2);
	_mav_put_float(buf, 16, p_3);
	_mav_put_float(buf, 20, p_4);
	_mav_put_float(buf, 24, p_5);
	_mav_put_float(buf, 28, p_6);
	_mav_put_float(buf, 32, p_7);
	_mav_put_float(buf, 36, p_8);
	_mav_put_float(buf, 40, p_9);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#else
	mavlink_poly_coefs_t packet;
	packet.del_t = del_t;
	packet.p_0 = p_0;
	packet.p_1 = p_1;
	packet.p_2 = p_2;
	packet.p_3 = p_3;
	packet.p_4 = p_4;
	packet.p_5 = p_5;
	packet.p_6 = p_6;
	packet.p_7 = p_7;
	packet.p_8 = p_8;
	packet.p_9 = p_9;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POLY_COEFS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POLY_COEFS_LEN, MAVLINK_MSG_ID_POLY_COEFS_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#endif
}

/**
 * @brief Pack a poly_coefs message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param del_t The length of time polynomial is valid.
 * @param p_0 Zero order coefficient.
 * @param p_1 First order coefficient.
 * @param p_2 Second order coefficient.
 * @param p_3 Third order coefficient.
 * @param p_4 Fourth order coefficient.
 * @param p_5 Fifth order coefficient.
 * @param p_6 Sixth order coefficient.
 * @param p_7 Seventh order coefficient.
 * @param p_8 Eigth order coefficient.
 * @param p_9 Ninth order coefficient.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_poly_coefs_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float del_t,float p_0,float p_1,float p_2,float p_3,float p_4,float p_5,float p_6,float p_7,float p_8,float p_9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POLY_COEFS_LEN];
	_mav_put_float(buf, 0, del_t);
	_mav_put_float(buf, 4, p_0);
	_mav_put_float(buf, 8, p_1);
	_mav_put_float(buf, 12, p_2);
	_mav_put_float(buf, 16, p_3);
	_mav_put_float(buf, 20, p_4);
	_mav_put_float(buf, 24, p_5);
	_mav_put_float(buf, 28, p_6);
	_mav_put_float(buf, 32, p_7);
	_mav_put_float(buf, 36, p_8);
	_mav_put_float(buf, 40, p_9);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#else
	mavlink_poly_coefs_t packet;
	packet.del_t = del_t;
	packet.p_0 = p_0;
	packet.p_1 = p_1;
	packet.p_2 = p_2;
	packet.p_3 = p_3;
	packet.p_4 = p_4;
	packet.p_5 = p_5;
	packet.p_6 = p_6;
	packet.p_7 = p_7;
	packet.p_8 = p_8;
	packet.p_9 = p_9;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POLY_COEFS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POLY_COEFS_LEN, MAVLINK_MSG_ID_POLY_COEFS_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#endif
}

/**
 * @brief Encode a poly_coefs struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param poly_coefs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_poly_coefs_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_poly_coefs_t* poly_coefs)
{
	return mavlink_msg_poly_coefs_pack(system_id, component_id, msg, poly_coefs->del_t, poly_coefs->p_0, poly_coefs->p_1, poly_coefs->p_2, poly_coefs->p_3, poly_coefs->p_4, poly_coefs->p_5, poly_coefs->p_6, poly_coefs->p_7, poly_coefs->p_8, poly_coefs->p_9);
}

/**
 * @brief Encode a poly_coefs struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param poly_coefs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_poly_coefs_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_poly_coefs_t* poly_coefs)
{
	return mavlink_msg_poly_coefs_pack_chan(system_id, component_id, chan, msg, poly_coefs->del_t, poly_coefs->p_0, poly_coefs->p_1, poly_coefs->p_2, poly_coefs->p_3, poly_coefs->p_4, poly_coefs->p_5, poly_coefs->p_6, poly_coefs->p_7, poly_coefs->p_8, poly_coefs->p_9);
}

/**
 * @brief Send a poly_coefs message
 * @param chan MAVLink channel to send the message
 *
 * @param del_t The length of time polynomial is valid.
 * @param p_0 Zero order coefficient.
 * @param p_1 First order coefficient.
 * @param p_2 Second order coefficient.
 * @param p_3 Third order coefficient.
 * @param p_4 Fourth order coefficient.
 * @param p_5 Fifth order coefficient.
 * @param p_6 Sixth order coefficient.
 * @param p_7 Seventh order coefficient.
 * @param p_8 Eigth order coefficient.
 * @param p_9 Ninth order coefficient.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_poly_coefs_send(mavlink_channel_t chan, float del_t, float p_0, float p_1, float p_2, float p_3, float p_4, float p_5, float p_6, float p_7, float p_8, float p_9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POLY_COEFS_LEN];
	_mav_put_float(buf, 0, del_t);
	_mav_put_float(buf, 4, p_0);
	_mav_put_float(buf, 8, p_1);
	_mav_put_float(buf, 12, p_2);
	_mav_put_float(buf, 16, p_3);
	_mav_put_float(buf, 20, p_4);
	_mav_put_float(buf, 24, p_5);
	_mav_put_float(buf, 28, p_6);
	_mav_put_float(buf, 32, p_7);
	_mav_put_float(buf, 36, p_8);
	_mav_put_float(buf, 40, p_9);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_COEFS, buf, MAVLINK_MSG_ID_POLY_COEFS_LEN, MAVLINK_MSG_ID_POLY_COEFS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_COEFS, buf, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#endif
#else
	mavlink_poly_coefs_t packet;
	packet.del_t = del_t;
	packet.p_0 = p_0;
	packet.p_1 = p_1;
	packet.p_2 = p_2;
	packet.p_3 = p_3;
	packet.p_4 = p_4;
	packet.p_5 = p_5;
	packet.p_6 = p_6;
	packet.p_7 = p_7;
	packet.p_8 = p_8;
	packet.p_9 = p_9;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_COEFS, (const char *)&packet, MAVLINK_MSG_ID_POLY_COEFS_LEN, MAVLINK_MSG_ID_POLY_COEFS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_COEFS, (const char *)&packet, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_POLY_COEFS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_poly_coefs_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float del_t, float p_0, float p_1, float p_2, float p_3, float p_4, float p_5, float p_6, float p_7, float p_8, float p_9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, del_t);
	_mav_put_float(buf, 4, p_0);
	_mav_put_float(buf, 8, p_1);
	_mav_put_float(buf, 12, p_2);
	_mav_put_float(buf, 16, p_3);
	_mav_put_float(buf, 20, p_4);
	_mav_put_float(buf, 24, p_5);
	_mav_put_float(buf, 28, p_6);
	_mav_put_float(buf, 32, p_7);
	_mav_put_float(buf, 36, p_8);
	_mav_put_float(buf, 40, p_9);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_COEFS, buf, MAVLINK_MSG_ID_POLY_COEFS_LEN, MAVLINK_MSG_ID_POLY_COEFS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_COEFS, buf, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#endif
#else
	mavlink_poly_coefs_t *packet = (mavlink_poly_coefs_t *)msgbuf;
	packet->del_t = del_t;
	packet->p_0 = p_0;
	packet->p_1 = p_1;
	packet->p_2 = p_2;
	packet->p_3 = p_3;
	packet->p_4 = p_4;
	packet->p_5 = p_5;
	packet->p_6 = p_6;
	packet->p_7 = p_7;
	packet->p_8 = p_8;
	packet->p_9 = p_9;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_COEFS, (const char *)packet, MAVLINK_MSG_ID_POLY_COEFS_LEN, MAVLINK_MSG_ID_POLY_COEFS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_COEFS, (const char *)packet, MAVLINK_MSG_ID_POLY_COEFS_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE POLY_COEFS UNPACKING


/**
 * @brief Get field del_t from poly_coefs message
 *
 * @return The length of time polynomial is valid.
 */
static inline float mavlink_msg_poly_coefs_get_del_t(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field p_0 from poly_coefs message
 *
 * @return Zero order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_0(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field p_1 from poly_coefs message
 *
 * @return First order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field p_2 from poly_coefs message
 *
 * @return Second order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field p_3 from poly_coefs message
 *
 * @return Third order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field p_4 from poly_coefs message
 *
 * @return Fourth order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field p_5 from poly_coefs message
 *
 * @return Fifth order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_5(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field p_6 from poly_coefs message
 *
 * @return Sixth order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_6(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field p_7 from poly_coefs message
 *
 * @return Seventh order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_7(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field p_8 from poly_coefs message
 *
 * @return Eigth order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_8(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field p_9 from poly_coefs message
 *
 * @return Ninth order coefficient.
 */
static inline float mavlink_msg_poly_coefs_get_p_9(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Decode a poly_coefs message into a struct
 *
 * @param msg The message to decode
 * @param poly_coefs C-struct to decode the message contents into
 */
static inline void mavlink_msg_poly_coefs_decode(const mavlink_message_t* msg, mavlink_poly_coefs_t* poly_coefs)
{
#if MAVLINK_NEED_BYTE_SWAP
	poly_coefs->del_t = mavlink_msg_poly_coefs_get_del_t(msg);
	poly_coefs->p_0 = mavlink_msg_poly_coefs_get_p_0(msg);
	poly_coefs->p_1 = mavlink_msg_poly_coefs_get_p_1(msg);
	poly_coefs->p_2 = mavlink_msg_poly_coefs_get_p_2(msg);
	poly_coefs->p_3 = mavlink_msg_poly_coefs_get_p_3(msg);
	poly_coefs->p_4 = mavlink_msg_poly_coefs_get_p_4(msg);
	poly_coefs->p_5 = mavlink_msg_poly_coefs_get_p_5(msg);
	poly_coefs->p_6 = mavlink_msg_poly_coefs_get_p_6(msg);
	poly_coefs->p_7 = mavlink_msg_poly_coefs_get_p_7(msg);
	poly_coefs->p_8 = mavlink_msg_poly_coefs_get_p_8(msg);
	poly_coefs->p_9 = mavlink_msg_poly_coefs_get_p_9(msg);
#else
	memcpy(poly_coefs, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_POLY_COEFS_LEN);
#endif
}
