/* -*- c++ -*- */
/*
 * Copyright 2021 Derek Kozel.
 *
 * Copyright 2022 David Cherkus.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MXVII_ENCODER_H
#define INCLUDED_MXVII_ENCODER_H

#include <gnuradio/mxvii/api.h>
#include <gnuradio/sync_block.h>
#include <string>

namespace gr {
namespace mxvii {

/*!
 * \brief <+description of block+>
 * \ingroup mxvii
 *
 */
class MXVII_API encoder : virtual public gr::sync_block
{
public:
    typedef std::shared_ptr<encoder> sptr;

    /*!
     * \brief Return a shared_ptr to a new instance of mxvii::encoder.
     *
     * To avoid accidental use of raw pointers, mxvii::encoder's
     * constructor is in a private implementation
     * class. mxvii::encoder::make is the public interface for
     * creating new instances.
     */
    static sptr make(const std::string source_address,
                     const std::string destination_address);
};

} // namespace mxvii
} // namespace gr

#endif /* INCLUDED_MXVII_ENCODER_H */
