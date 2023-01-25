const express = require("express");
const request = require("request-promise");

const app = express();
const PORT = process.env.PORT || 5000;

// const apiKey ='4d9543633ff2880107920da230ebabb5';
app.use(express.json());

const generateScrapperUrl = (apiKey) =>
  `http://api.scraperapi.com?api_key=${apiKey}&autoparse=true`;

app.get("/", (req, res) => {
  res.send("Welcome to Amazon Scrapper Api.");
});

//GET Product Details
app.get("/products/:productId", async (req, res) => {
  const { productId } = req.params;
  const { api_key } = req.query;
  try {
    const response = await request(
      `${generateScrapperUrl(
        api_key
      )}&url=https://www.amazon.ca/dp/${productId}`
    );
    res.json(JSON.parse(response));
  } catch (error) {
    res.json(error);
  }
});

//GET Reviews
app.get("/products/:productId/reviews", async (req, res) => {
  const { productId } = req.params;
  const { api_key } = req.query;
  try {
    const response = await request(
      `${generateScrapperUrl(
        api_key
      )}&url=https://www.amazon.ca/product-reviews/${productId}`
    );
    res.json(JSON.parse(response));
  } catch (error) {
    res.json(error);
  }
});

//Get offers
app.get("/products/:productId/offers", async (req, res) => {
  const { productId } = req.params;
  const { api_key } = req.query;
  try {
    const response = await request(
      `${generateScrapperUrl(
        api_key
      )}&url=https://www.amazon.ca/gp/offer-listing/${productId}`
    );
    res.json(JSON.parse(response));
  } catch (error) {
    res.json(error);
  }
});

//Get Search Products
app.get("/search/:searchQuery", async (req, res) => {
  const { searchQuery } = req.params;
  const { api_key } = req.query;
  try {
    const response = await request(
      `${generateScrapperUrl(
        api_key
      )}&url=https://www.amazon.ca/s?k=${searchQuery}`
    );
    res.json(JSON.parse(response));
  } catch (error) {
    res.json(error);
  }
});

app.listen(PORT, () => console.log(`Server running on Port ${PORT}`));
