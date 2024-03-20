let isSort = false;
// fetch categories buttons
function fetchButtonData() {
  fetch("https://openapi.programming-hero.com/api/videos/categories")
    .then((response) => {
      if (!response.ok) {
        throw new Error("Network response was not ok");
      }
      return response.json();
    })
    .then((data) => {
      showButton(data);
    })
    .catch((error) => {
      console.error("There was a problem with the fetch operation:", error);
    });
}

// show fetched buttons
function showButton(data) {
  const categories = Array.isArray(data.data) ? data?.data : data.categories;
  const tabButtonsContainer = document.getElementById("tabButtons");

  categories.forEach((category, index) => {
    const button = document.createElement("button");
    button.classList.add("common_button");
    button.textContent = category.category;

    // add class on selected button
    button.addEventListener("click", () =>
      handleButtonClick(button, index, category)
    );
    tabButtonsContainer.appendChild(button);
  });

  // default selected button
  const allButton = document.querySelector(".common_button");
  allButton.click();
}

// Handle button click event
function handleButtonClick(clickedButton, index, category) {
  const buttons = document.querySelectorAll(".common_button");

  // remove class from all button
  buttons.forEach((button) => {
    button.classList.remove("selected_button");
  });

  // add class to selected button
  clickedButton.classList.add("selected_button");

  // Fetch and display data based on the selected category
  fetchDataForCategory(category.category_id);
  console.log("Selected category:", category);
}

// Fetch and display data based on the selected category
function fetchDataForCategory(categoryId) {
  fetch(
    `https://openapi.programming-hero.com/api/videos/category/${categoryId}`
  )
    .then((response) => {
      if (!response.ok) {
        throw new Error("Network response was not ok");
      }
      return response.json();
    })
    .then((data) => {
      const sortedData = data?.data.sort(
        (a, b) => b.others.views - a.others.views
      );
      displayData(data?.data);
    })
    .catch((error) => {
      console.error("There was a problem with the fetch operation:", error);
    });
}

// display card with fetched data
// display card with fetched data
function displayData(data) {
  const cardContainer = document.getElementById("cardContainer");
  cardContainer.removeAttribute("style");
  cardContainer.innerHTML = "";
  // Check if the data array is empty
  if (data && data.length > 0) {
    // Iterate through the data and create a card for each item
    data.forEach((item) => {
      const card = document.createElement("div");

      // Add your logic to populate card content based on the fetched data
      // Example content, replace with actual data properties

      card.innerHTML = `
        <img class="card_img1" src="${item.thumbnail}" alt="">
        <div class="card_details">
          <img class="card_img2 card_details-first_half" src="${
            item.authors[0].profile_picture
          }" alt="">
          <div class="card_details-second_half">
            <h1 class="card_heading mb-0">${item.title}</h1>
            <div>
              <div class="d-flex justify-content-start align-items-center my-0">
                <p class="mr-1 my-0">${item.authors[0].profile_name}</p>
                ${
                  item.authors[0].verified
                    ? '<img class="card-tick_icon" src="./fi_10629607.svg" alt="">'
                    : ""
                }
              </div>
              <p>${item.others.views} views</p>
            </div>
          </div>
        </div>
      `;

      // Append the card to the card container
      cardContainer.appendChild(card);
    });
  } else {
    // If data is empty, append the empty element
    const empty = document.createElement("div");
    const cardContainer = document.getElementById("cardContainer");

    // Set the style properties to center the grid items
    cardContainer.style.display = "flex";
    cardContainer.style.placeItems = "center";
    cardContainer.style.justifyContent = "center";
    cardContainer.style.marginTop = "90px";

    empty.classList.add("empty");
    empty.innerHTML = `
      <div class="empty-img">
        <img class="m-auto " src="./fi_5301987.svg" alt="">
        <p>Oops!! Sorry, There is no <br> content here</p>
      </div>
    `;
    cardContainer.appendChild(empty);
  }
}

// call the function
fetchButtonData();

const sortData = () => {
  const selectedButton = document.querySelector(".selected_button");
  getCategoryId(selectedButton.innerHTML);
};

const getCategoryId = (selectedCategory) => {
  // get all category
  fetch("https://openapi.programming-hero.com/api/videos/categories")
    .then((response) => {
      if (!response.ok) {
        throw new Error("Network response was not ok");
      }
      return response.json();
    })
    .then((data) => {
      const category = data?.data.find(
        (item) => item.category == selectedCategory
      );

      fetch(
        `https://openapi.programming-hero.com/api/videos/category/${category.category_id}`
      )
        .then((response) => {
          if (!response.ok) {
            throw new Error("Network response was not ok");
          }
          return response.json();
        })
        .then((data) => {
          const sortedData = data?.data.sort(
            (a, b) => b.others.views.replace("K"," ") - a.others.views.replace("K"," ")
          );
          console.log(sortedData, "sorted data");
          displayData(data?.data);
        })
        .catch((error) => {
          console.error("There was a problem with the fetch operation:", error);
        });
    })
    .catch((error) => {
      console.error("There was a problem with the fetch operation:", error);
    });
};